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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *g;
        ListNode* f=NULL;
        while(l1!=NULL&&l2!=NULL)
        {
            int h1=l1->val;
            int h2=l2->val;
            if(h1<=h2)
            {
                if(f==NULL)
                {
                    ListNode* k = new ListNode(h1);
                    f=k;
                    g=f;
                }
                else
                {
                     ListNode* k = new ListNode(h1);
                    f->next=k;
                    f=f->next;
                }
                l1=l1->next;
            }
            else
            {
                if(f==NULL)
                {
                    ListNode* k = new ListNode(h2);
                    f=k;
                    g=f;
                }
                else
                {
                    ListNode* k = new ListNode(h2);
                    f->next=k;
                    f=f->next;
                }
                l2=l2->next;
            }
            
        }
        while(l1)
        {
            if(f==NULL)
                {
                    ListNode* k = new ListNode(l1->val);
                    f=k;
                    g=f;
                }
                else
                {
                     ListNode* k = new ListNode(l1->val);
                    f->next=k;
                    f=f->next;
                }
                l1=l1->next;
        }
        while(l2)
        {
            if(f==NULL)
                {
                    ListNode* k = new ListNode(l2->val);
                    f=k;
                    g=f;
                }
                else
                {
                     ListNode* k = new ListNode(l2->val);
                    f->next=k;
                    f=f->next;
                }
                l2=l2->next;
        }
        return g;
        
    }
};