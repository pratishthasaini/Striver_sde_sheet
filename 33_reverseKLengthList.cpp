Node* kReverse(Node* head, int k) {
     if(head == NULL && k == 1) return head;
        int count = 0;
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* pre = dummy, *curr = dummy, *nex = dummy;
        while(curr->next != NULL){
            curr = curr->next;
            count++;
        }
        while(k <= count){
            curr = pre->next;
            nex = curr->next;
            for(int i = 0; i < k-1; i++){
                curr->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = curr->next;
            }
            pre = curr;
            count -= k;
        }
        return dummy->next;
}
