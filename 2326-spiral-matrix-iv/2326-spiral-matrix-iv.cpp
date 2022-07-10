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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int a[m][n];
        for(int j1= 0 ; j1<m ; j1++)
        {
            for(int j2=0 ; j2<n ; j2++)
            {
                // cout<<a[j1][j2]<<" ";
                a[j1][j2]=-1;
            }
            // cout<<endl;
        }
        int l=0;
        int h=0;
        bool temp=false;
        set<int> s1,s2;
        s1.insert(-1);
        s1.insert(m);
        s2.insert(n);
        s2.insert(0);
        vector<int> v;
        while(head)
        {
            v.push_back(head->val);
            head=head->next;   
        }
        int i=0;
        int l1=0;
        int l2=m-1;
        int h1=0;
        int h2=n-1;
        while(l1<l2&&h1<h2)
        {
            if(i>=v.size())
            {
                break;
            }
            
            for(int j=h1 ; j<=h2 ; j++)
            {
                a[l1][j]=v[i];
                i++;
                if(i>=v.size())
            {
                break;
            }
            }
            if(i>=v.size())
            {
                break;
            }
            for(int j=l1+1 ; j<l2 ; j++)
            {
                a[j][h2]=v[i];
                i++;
                if(i>=v.size())
            {
                break;
            }
            }
            if(i>=v.size())
            {
                break;
            }
            for(int j=h2 ; j>=h1 ; j--)
            {
                a[l2][j]=v[i];
                i++;
                if(i>=v.size())
            {
                break;
            }
            }
            if(i>=v.size())
            {
                break;
            }
            for(int j=l2-1 ; j>l1 ; j--)
            {
                a[j][h1]=v[i];
                i++;
                if(i>=v.size())
            {
                break;
            }
            }
            if(i>=v.size())
            {
                break;
            }
            l1++;
            l2--;
            h1++;
            h2--;
        }
        // vector<vector<int>> f;
        // for(int j1= 0 ; j1<m ; j1++)
        // {
        //     // vector<int> p;
        //     for(int j2=0 ; j2<n ; j2++)
        //     {
        //         cout<<a[j1][j2]<<" ";
        //         // p.push_back(a[j1][j2]);
        //     }
        //     cout<<endl;
        //     // f.push_back(p);
        // }
        if(h1==h2&&l1<=l2)
        {   for(int k=l1 ; k<=l2 ; k++)
            {
                if(i>=v.size())
                {
                    break;
                }
                a[k][h1]=v[i];i++;
            }
        }
        if(l1==l2&&h2>=h1)
        {
            for(int k=h1 ; k<=h2 ; k++)
            {
                if(i>=v.size())
                {
                    break;
                }
                a[l1][k]=v[i];
                i++;
            }
        }
        vector<vector<int>> f;
        for(int j1= 0 ; j1<m ; j1++)
        {
            vector<int> p;
            for(int j2=0 ; j2<n ; j2++)
            {
                // cout<<a[j1][j2]<<" ";
                p.push_back(a[j1][j2]);
            }
            // cout<<endl;
            f.push_back(p);
        }
        return f;
        
    }
};