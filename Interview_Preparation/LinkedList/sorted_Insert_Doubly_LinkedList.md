```c++
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

    DoublyLinkedListNode *node= new DoublyLinkedListNode(data);

    if(head==nullptr)
        return node;

    DoublyLinkedListNode *temp=head;

    if(temp->data >=data)
    {
        node->next=temp;
        node->next->prev=node;
        return node;
    }

    while(temp->next!=nullptr)
    {
        if(data < temp->next->data){
            
            node->next=temp->next;
            temp->next=node;
            temp->next->prev=node;
            node->prev=temp;
            
            return head;
        }

        temp=temp->next;
    }

    if(temp->next==nullptr && data>=temp->data)
    {
        temp->next=node;
        node->prev=temp;
    }

return head;
}
```
