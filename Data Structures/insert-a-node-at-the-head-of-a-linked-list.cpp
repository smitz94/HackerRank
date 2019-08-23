SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

    SinglyLinkedListNode *node= new SinglyLinkedListNode(data);

    if(llist==NULL)
    {
        return node;
    }
    else{
        SinglyLinkedListNode *temp;
        temp=llist;
        node->next=temp;
        llist=node;

        return llist;
    }
	

}
