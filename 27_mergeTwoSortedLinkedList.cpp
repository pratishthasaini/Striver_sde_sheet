/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* newList = NULL;
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp;
           if(list1 == NULL && list2 == NULL) return NULL;
           else if(list1 == NULL) return list2;
           else if(list2 == NULL) return list1;
           if(list1->val < list2->val){
            newList = temp = list1;
            list1 = list1 -> next;
            newList->next = NULL;
           }
           else{
            newList = temp = list2;
            list2 = list2 -> next;
            newList->next = NULL;
           }
           while(list1 && list2){
            if(list1->val < list2->val){
                temp->next = list1;
                temp = list1;
                list1 = list1 -> next;
                temp->next = NULL;
            }
            else{
                temp->next = list2;
                temp = list2;
                list2 = list2->next;
                temp->next = NULL;
            }
           }
           if(list1) temp->next = list1;
           if(list2) temp->next = list2;

        return newList;
    }
};
