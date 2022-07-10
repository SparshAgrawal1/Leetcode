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
    // int ans;
 void xxxx(vector<TreeNode*> &f,vector<TreeNode*> &v, TreeNode* a,TreeNode* k)
 {
     if(a==NULL)
     {
         // vector<TreeNode*> v1;
         // v=v1;
         return ;
     }
     
     v.push_back(a);
     vector<TreeNode*> p=v;
     if(a==k)
     {
         // ans++;
         f=v;
         return;
     }
     
     TreeNode* a1;
     TreeNode* a2;
     a1=a->left;
     a2=a->right;
     // if(a1!=NULL)
     // {
         xxxx(f,v,a1,k);
     // }
     // if(a2!=NULL)
     // {
         xxxx(f,p,a2,k);
     // }
     
 }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if(root==NULL)
            return NULL;
        if(root==p or root==q)
            return root;
        TreeNode *lca1 = lowestCommonAncestor(root->left, p, q);
        TreeNode *lca2 = lowestCommonAncestor(root->right, p, q);
        if(lca1 and lca2)
            return root;
        else if(lca1)
            return lca1;
        else
            return lca2;
    }
};