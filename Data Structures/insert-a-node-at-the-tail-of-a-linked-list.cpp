SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode *node=new SinglyLinkedListNode(data);
    node->next=NULL;
    if(head==NULL)
    {
        head=node;
        return head;
    }
    else{
      SinglyLinkedListNode *rhead = head;
      while (head->next != NULL) {
        head = head->next;
      }
      head->next = node;
      return rhead;
    }
    
    

}
