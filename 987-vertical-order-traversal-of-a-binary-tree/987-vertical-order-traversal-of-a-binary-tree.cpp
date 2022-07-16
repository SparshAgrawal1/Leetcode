/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        map<int,vector<pair<int,int>>> m;
        while(q.empty()==false)
        {
            auto x=q.front();
            q.pop();
            TreeNode* l = x.first;
            auto y=x.second;
            int h=y.first;
            int k=y.second;
            m[h].push_back({k,l->val});
            if(l->left!=NULL)
            {
                q.push({l->left,{h-1,k+1}});
            }   
            if(l->right!=NULL)
            {
                q.push({l->right,{h+1,k+1}});
            }
        }
        vector<vector<int>> f;
        for(auto x:m)
        {
            vector<int> temp;
            vector<pair<int,int>> p=m[x.first];
            sort(p.begin(),p.end());
            for(auto x:p)
            {
                temp.push_back(x.second);
            }
            f.push_back(temp);
        }
        return f;
    }
};