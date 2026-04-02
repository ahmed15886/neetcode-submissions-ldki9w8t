/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* curr = head;
        Node* new_head = new Node(0);
        Node* dummy = new_head;
        unordered_map<Node* ,Node* >mp;
        while(curr){
            Node* node = new Node(curr->val);
            mp[curr] = node;
            dummy->next = node;
            curr = curr->next;
            dummy=dummy->next;
        }
        for(auto& [orig, copy] : mp){
            copy->random = orig->random ? mp[orig->random] : nullptr;
        }

        return new_head->next;
    }
};
