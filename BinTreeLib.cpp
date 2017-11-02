#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef int DataType;
typedef struct Node{
	DataType Data;
	Node* parent;
	Node* left;
	Node* right;
};
typedef Node* Tree;
//Tao cay rong
void MAKENULL_TREE(Tree &T){
	T= NULL;
}
//Kiem tra cay rong
int EMPTY_TREE(Tree T){
	return T==NULL;
}
//Xac dinh con trai cua 1 nut
Tree LEFTCHILD(Tree n){
	if (n!=NULL) return n->left;
	else return NULL;
}
//Xac dinh con phai cua 1 nut
Tree RIGHTCHILD(Tree n){
	if (n!=NULL) return n->right;
	else return NULL;
}
//Kiem tra nut la
int ISLEAF(Tree n){
	if(n!=NULL)
		return (LEFTCHILD(n)==NULL)&&(RIGHTCHILD(n)==NULL);
	else return 0;
}
//Xac dinh parent.
Tree PARENT(Tree n){
	if (n!=NULL) return n->parent;
	else return NULL;
}
//Xac dinh so nut cua cay
int NB_NODES(Tree T){
	if (EMPTY_TREE(T)) return 0;
	else return 1+NB_NODES(LEFTCHILD(T) + NB_NODES(RIGHTCHILD(T)));
}
//Tao cay tu 2 cay co san
Tree Create2(DataType v,Tree l,Tree r){
	Tree N;
	N=(Node*)malloc(sizeof(Node));
	N->Data=v;
	N->left=l;
	N->right=r;
	N->parent=NULL;
	if (l!=NULL) l->parent=N;
	if (r!=NULL) r->parent=N;
	return N;
}
//Thu tuc duyet cay tien tu
void PreOrder(Tree T){
	if(T!=NULL){
		printf("%5c",T->Data);
		PreOrder(LEFTCHILD(T));
		PreOrder(RIGHTCHILD(T));
	}
}
//Thu tuc duyet cay trung tu
void InOrder(Tree T){
	if(T!=NULL){
		InOrder(LEFTCHILD(T));
		printf("%5c",T->Data);
		InOrder(RIGHTCHILD(T));
	}
}
//Thu tuc duyet cay hau tu
void PosOrder(Tree T){
	if(T!=NULL){
		PosOrder(LEFTCHILD(T));
		PosOrder(RIGHTCHILD(T));
		printf("%5c",T->Data);
	}
}
Node *pr(Node *n){
	if(n!=NULL)
		return n->parent;
	else return NULL;	
}
// 8a
int IS_SIBLING(Node *n,Node *m){
	return pr(n)==pr(m);
}
// 8b
int IS_ANCESTOR(Node*n, Node*m){
	if(n!=NULL&&m!=NULL)
		if(n==m)
			return 1;
		else return IS_ANCESTOR(n,pr(m));
	else return 0;
}
// 8c
int COUNT1CHILD(Node *n){
	if(n==NULL) return 0;
	if ((n->left!=NULL&&n->right==NULL) || (n->left==NULL &&n->right!=NULL))
		return 1+COUNT1CHILD(n->left)+COUNT1CHILD(n->right);
	else return COUNT1CHILD(n->left)+COUNT1CHILD(n->right);
}
// 8d
void ADDLEAF(Tree T,int &D)
{
    if (T)
    {
        if (T->left == NULL&&T->right == NULL)
            D++;
        ADDLEAF(T->left,D);
        ADDLEAF(T->right,D);
    }
}


















