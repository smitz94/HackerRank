SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* prev;
    SinglyLinkedListNode* current;
    SinglyLinkedListNode* nxt;
    prev=NULL;
    nxt=NULL;
    current=head;

    while(current!=NULL)
    {
        nxt=current->next;
        current->next=prev;
        prev=current;
        current=nxt;
    }

    head=prev;
    return head;

}
