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
    bool hasCycle(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        return false;
        ListNode* fptr=head->next;
        ListNode* sptr=head;
        while(fptr && fptr->next){
            if(fptr == sptr)
            return true;
            fptr=fptr->next->next;
            sptr=sptr->next;
        }
        return false;
    }
};
