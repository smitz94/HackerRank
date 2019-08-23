DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

       DoublyLinkedListNode *current,*prev,*next;
    if(head==NULL)return NULL;
    current=head;
    prev=NULL;
    while(current!=NULL)
        {
        next=current->next;
        current->next=prev;
        current->prev=next;
        prev=current;
        current=next;
    }
    head=prev;
    return head;

}
