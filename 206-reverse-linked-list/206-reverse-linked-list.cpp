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
    
    ListNode* reverseList(ListNode* v) {
        ListNode *y=NULL;
        ListNode *z=new ListNode();
        while(v)
        {
            z=v->next;
            v->next=y;
            y=v;
            v=z;
           
            
        }
        return y;
        
    }
};