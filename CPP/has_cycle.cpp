

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    int count=0;
    SinglyLinkedListNode* slow=head;
    SinglyLinkedListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            break;
        }
    }
    if(fast==NULL){
        return 0;
    }
    if(fast->next==NULL){
        return 0;
    }
    return 1;
}

