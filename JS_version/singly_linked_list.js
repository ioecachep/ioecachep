function SinglyLinkedListNode(data) {
    this.data = data
    this.next = null
}

function SinglyLinkedList() {
    this.head = null
    this.size = 0
}

SinglyLinkedList.prototype.isEmpty = function() {
    return this.size = 0
}

SinglyLinkedList.prototype.insert = function(value) {
    if (this.head === null) {
        // If first node
        this.head = new SinglyLinkedListNode(value)
    }else {
        var temp = this.head
        this.head = new SinglyLinkedListNode(value)
        this.head.next = temp
    }
    this.size++
}

var sll1 = new SinglyLinkedList()
sll1.insert(1) // linked list now is: 1 -> null
sll1.insert(2) // linked list now is: 2 -> 1 -> null
sll1.insert(3) // linked list now is: 3 -> 2 -> 1 null
