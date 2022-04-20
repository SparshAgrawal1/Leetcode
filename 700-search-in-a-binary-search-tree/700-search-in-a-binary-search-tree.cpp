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
void xxxx(TreeNode* root, int val,bool &flag, TreeNode* &p)
{
    if(root==NULL)
    {
        return;
    }
    if(root->val==val)
    {
        p=root;
        flag=true;
        return;
    }
    xxxx(root->left,val,flag,p);
    xxxx(root->right,val,flag,p);
    
}
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
         bool flag=false;
        TreeNode* p=NULL;
        xxxx(root,val,flag,p);
        return p;
        
    }
};