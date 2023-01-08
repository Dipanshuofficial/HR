

/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
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

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int ans,size=0;
    SinglyLinkedListNode* temp=llist;
    SinglyLinkedListNode* iterator=llist;
    while(temp!=NULL){
        size+=1;
        temp=temp->next;
    }
    cout<<size<<"\n";
    int g=size-positionFromTail-1;
    for(int i=0;i<size;i++){
        if(i!=0){
            if(iterator->next!=NULL){
                iterator=iterator->next;
            }
        }
        if(i==g){
            ans=iterator->data;
            break;
        }
    }
    return ans;
}

