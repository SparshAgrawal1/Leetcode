/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* a, TreeNode* b, int c) 
    {
        map<int,vector<int>> m;
    TreeNode* root=a;
    queue<TreeNode*> q;
    q.push(root);
    while(q.empty()==false)
    {
        TreeNode* x = q.front();
        q.pop();
        if(x->left!=NULL)
        {
            m[x->val].push_back(x->left->val);
            m[x->left->val].push_back(x->val);
            q.push(x->left);
        }
        if(x->right!=NULL)
        {
            m[x->val].push_back(x->right->val);
            m[x->right->val].push_back(x->val);
            q.push(x->right);
        }
    }
    queue<pair<int,int>> p;
    p.push({b->val,0});
    unordered_set<int> s;
    s.insert(b->val);
    vector<int> f;
    while(p.empty()==false)
    {
        auto x=p.front();
        p.pop();
        int h=x.first;
        int l=x.second;
        if(l==c)
        {
            f.push_back(h);
        }
        else if(l>c)
        {
            break;
        }
        for(auto y:m[h])
        {
            if(s.find(y)==s.end())
            {
                s.insert(y);
                p.push({y,l+1});
            }
        }
    }
    return f;
    }
};