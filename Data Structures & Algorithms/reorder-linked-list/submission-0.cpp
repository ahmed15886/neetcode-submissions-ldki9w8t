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

    ListNode* reverseList(ListNode* head) {
        ListNode* nh;
        ListNode* prev(nullptr);
        while(head){
            nh = head->next;
            head->next = prev;
            prev = head;
            head = nh;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        int len = 0;
        ListNode* curr = head;
        while(curr){
            len++;
            curr = curr->next;
        }


        ListNode* head2;
        int mid = (len+1)/2;
        curr=head;
        while(mid > 1){
            cout<<curr->val<<" ";
            curr = curr->next;
            mid--;
        }
        head2=curr->next;
        curr->next = nullptr;

        //reverse linked list
        head2 = reverseList(head2);

        ListNode* dummy1;
        ListNode* dummy2;
        //merge
        while(head && head2){
            dummy1 = head->next;
            head->next=head2;

            dummy2 = head2->next;
            head2->next=dummy1;

            head = dummy1;
            head2 = dummy2;
        }
    }
};
