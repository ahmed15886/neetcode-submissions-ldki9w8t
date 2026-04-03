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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* curr = head;
        int c = 0;
        while(l1 != nullptr && l2 != nullptr){
            int n1 = l1->val;
            int n2 = l2->val;
            int sum = n1+n2+c;
            int rem = (sum)%10;
            ListNode* node = new ListNode(rem);
            curr->next = node;
            curr = curr->next;
            c = sum/10;
            l1=l1->next;
            l2=l2->next;
        }
        ListNode* rem_list = (l1==nullptr)?l2:l1;
        while(rem_list){
            int n1 = rem_list->val;
            int sum = n1+c;
            int rem = sum%10;
            ListNode* node = new ListNode(rem);
            curr->next = node;
            curr = curr->next;
            c = sum/10;
            rem_list = rem_list->next;
        }
        if(c==1){
            ListNode* node = new ListNode(c);
            curr->next = node;
        }
        return head->next;
    }
};
