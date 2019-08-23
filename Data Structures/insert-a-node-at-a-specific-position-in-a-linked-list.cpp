SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* node= new SinglyLinkedListNode(data);

    if (head == NULL) {
      return node;
    }

    if (position == 0) {
      node->next = head;
      return node;
    }

    SinglyLinkedListNode *currentNode = head;
    while (position - 1 > 0) {
      currentNode = currentNode->next;
      position--;
    }

    node->next = currentNode->next;
    currentNode->next = node;

    return head;
}
