Node* removeKthNode(Node* head, int K)
{
    int len = 0;
    Node* temp = head;
    
    while(temp){
        temp = temp->next;
        ++len;
    }
    if(len == K){
        head = head->next;
        return head;
    }
    temp = head;
    for(int i = 0; i < len-K-1; i++){
       temp = temp->next;         
    }
       temp->next = temp->next->next;
    return head;

}
