class Solution {
public:
    
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* curr = slow;
        ListNode* prev = NULL;
        while(curr != NULL){
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        fast = head;
    
        while(prev && fast){
            if(prev->val != fast->val) return false;
                prev = prev->next;
                fast = fast->next;
        }
        return true;
    }
};
