class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> mp;
        Node* temp = head;
        while(temp != NULL){
            Node* newNode = new Node(temp->val);
            mp[temp] = newNode;
            temp = temp->next;
        }
        temp = head;
        while(temp != NULL){
            Node* dummy = mp[temp];
            dummy->next = mp[temp->next];
            dummy->random = mp[temp->random];
            temp = temp->next;
        }
        return mp[head];
    }
};
