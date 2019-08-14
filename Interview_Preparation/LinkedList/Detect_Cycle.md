```c++
bool has_cycle(Node* head) {
    
    Node *slow;
    Node *fast;
    
    if(head==NULL)
        return head;
    
    slow=head;
    fast=head;
    
    while(slow->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast)
            return 1;
    }
    
    return 0;
    
}
```
