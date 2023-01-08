

/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode* nya =new DoublyLinkedListNode(data);
    DoublyLinkedListNode* temp=llist;
    if(temp->data>data){
        temp->prev=nya;
        nya->next=temp;
        llist=nya;
        return nya;
    }
    while(temp!=NULL){
        if(temp->data>=data){
            nya->next=temp;
            nya->prev=temp->prev;
            temp->prev->next=nya;
            return llist;
        }
        else if(temp->next==NULL){
            temp->next=nya;
            nya->prev=temp;
            nya->next=NULL;
            return llist;
        }
        temp=temp->next;
    }
    return llist;
}

