SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {

    SinglyLinkedListNode *temp;
    if(position==0)
    {
        temp=head;
        head=temp->next;
        temp=NULL;
        return head;
    }

    else{
            temp=head;
        for(int i=0;i<position-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        temp=NULL;
        return head;
    }

}
