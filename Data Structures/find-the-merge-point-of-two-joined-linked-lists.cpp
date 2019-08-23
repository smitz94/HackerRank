int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    int count1=0,count2=0;

    SinglyLinkedListNode *temp1=head1;

    SinglyLinkedListNode *temp2=head2;

    while(temp1!=NULL)
    {
        count1++;
        temp1=temp1->next;
    }
    cout<<count1<<endl;
    while(temp2!=NULL)
    {
        count2++;
        temp2=temp2->next;
    }
    cout<<count2<<endl;
    int diff=abs(count1-count2);

    temp1=(count1>count2)?head1:head2;

    temp2=(temp1==head1)?head2:head1;

    for(int i=0;i<diff;i++)
    {
        temp1=temp1->next;
    }

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1==temp2)
                return temp1->data;
            
            
                temp1=temp1->next;
                temp2=temp2->next;
            
    }

    return 0;

}
