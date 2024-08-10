
class Solution {
  public:
    Node* mergell(Node* a, Node* b){
        Node* newNode = new Node(0);
        Node* res = newNode;
        while(a && b){
            if(a->data < b->data){
                newNode->bottom = a;
                newNode = newNode->bottom;
                a = a->bottom;
            }
            else{
                newNode->bottom = b;
                newNode = newNode->bottom;
                b = b->bottom;
            }
        }
        if(a) newNode->bottom =a;
        else newNode->bottom = b;
        return res->bottom;
    }
    Node *flatten(Node *root) {
       if(!root || !root->next) return root;
       root->next = flatten(root->next);
       root = mergell(root, root->next);
       return root;
    }
};
