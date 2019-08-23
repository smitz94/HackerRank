bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
int count1=0,count2=0;
SinglyLinkedListNode *temp1,*temp2;
temp1=head1;
temp2=head2;

while(temp1!=NULL)
{
count1++;
temp1=temp1->next;
}

while(temp2!=NULL){
    count2++;
    temp2=temp2->next;
}

if(count1!=count2)
    return false;
else{
    temp1=head1;
    temp2=head2;
    bool flag=true;

    while(temp1!=NULL)
    {
      if (temp1->data != temp2->data) {
        flag = false;
        break;
      }
      temp1 = temp1->next;
      temp2 = temp2->next;
    }

    return flag;
}
}
