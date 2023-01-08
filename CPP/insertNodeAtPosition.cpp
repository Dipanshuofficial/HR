

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* neww = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp=llist;
    SinglyLinkedListNode* need;
    for(int i=1;i<=position;i++){
        if(i==position){
            need=temp->next;
        }
        else{
            temp=temp->next;
        }
    }
    
    temp->next=neww;
    neww->next=need;
    return llist;
}

