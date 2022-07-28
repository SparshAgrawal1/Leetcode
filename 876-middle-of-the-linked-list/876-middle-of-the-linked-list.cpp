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
    ListNode* middleNode(ListNode* head) {
        ListNode* x=head;
        ListNode* y=head->next;
        while(y!=NULL)
        {
            x=x->next;
            y=y->next;
            if(y!=NULL)
            {
                y=y->next;
            }
        }
        return x;
    }
};