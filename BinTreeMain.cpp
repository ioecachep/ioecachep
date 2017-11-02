#include<D:\Study\021117\BinTreeLib.cpp>
#include<stdio.h>
int main(){
	Tree T1= Create2('7',NULL,NULL);
	Tree T2= Create2('8',NULL,NULL);
	Tree T3= Create2('10',NULL,NULL);
	Tree T4= Create2('4',NULL,NULL);
	Tree T5= Create2('5',T1,NULL);
	Tree T6= Create2('2',T4,T5);
	Tree T7= Create2('9',NULL,T3);
	Tree T8= Create2('6',T2,T7);
	Tree T9= Create2('3',NULL,T8);
	Tree T= Create2('1',T6,T9);
	printf ("Duyet tien tu : \n");
	PreOrder(T);
	printf ("\nDuyet trung tu : \n");
	InOrder(T);
	printf ("\nDuyet hau tu : \n");
	PosOrder(T);
	//Kiem tra to tien T4 & T5
	if(IS_SIBLING(T4,T5))
		printf("\nHai nut la anh em ruot!\n");
	else printf("\nHai nut khong la anh em ruot!\n");
	//Kiem tra dong ho to tien T & T6
	if(IS_ANCESTOR(T,T6))
		printf("Co to tien dong ho voi nhau!\n");
	else
		printf("Khong co to tien dong ho!\n");
	printf("So nut chi co 1 nut con tren cay la: %d", COUNT1CHILD(T));
	int D=0;
	ADDLEAF(T,D);
	printf("\nSo nut la tren cay la: %d",D);
}
