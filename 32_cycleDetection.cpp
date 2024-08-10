bool detectCycle(Node *head)
{
    if(!head || !head->next) return false;
	Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        // if(fast->next == NULL) return false;
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }   
    return false;
}
