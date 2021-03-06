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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> v;
        ListNode* curr=head;
        while(curr)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        swap(v[k-1],v[v.size()-k]);
        int l=0;
        curr=head;
        while(curr)
        {
            curr->val=v[l];l++;
            curr=curr->next;
        }
        return head;
        
    }
};