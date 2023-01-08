

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* neww= new SinglyLinkedListNode(data);
    neww->next=NULL;
    if(llist==NULL){
        neww->next=NULL;
    }
    else{
        neww->next=llist;
    }
    return neww;
}

