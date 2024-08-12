class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) return head;
        int len = 1;
        ListNode* temp = head;
        while(temp->next != NULL){
            ++len;
            temp = temp->next;
        } 
        if(k > len) k = k % len;
        temp->next = head;
        k = len - k;
        for(int i = 0; i < k; i++){
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};
