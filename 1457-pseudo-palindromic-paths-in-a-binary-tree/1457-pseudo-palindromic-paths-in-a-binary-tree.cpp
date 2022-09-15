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
    int ans=0;
    void xxxx(TreeNode* root,vector<int> v)
    {
        if(root==NULL)
        {
            return;
        }
        v[root->val]++;
        if(root->left==NULL&&root->right==NULL)
        {
            int c=0;
            for(auto x:v)
            {
                if(x%2!=0)
                {
                    c++;
                }
            }
            if(c<=1)
            {
                ans++;
            }
            return;
        }
        xxxx(root->left,v);
        xxxx(root->right,v);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        // vector<vector<int>> f;
        vector<int> v;
        for(int i=0 ; i<10 ; i++)
        {
            v.push_back(0);
        }
        int temp=0;
        xxxx(root,v);
        // cout<<endl;
        return ans;
        
    }
};