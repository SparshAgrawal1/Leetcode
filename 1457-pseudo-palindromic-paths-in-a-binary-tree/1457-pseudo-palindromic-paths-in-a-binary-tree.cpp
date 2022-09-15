class Solution {
public:
    
    int count = 0;
    
    void dfs(TreeNode* root, vector<int> mp)
    {
     
        if(root == NULL)
        {
            return;
        }
        mp[root -> val]++;
        if(root -> left == NULL && root -> right == NULL)
        {
            int odd_count = 0;
            
            for(auto x : mp)
            {
                if(x % 2)
                {
                    odd_count++;
                }
            }
            
            if(odd_count <= 1)
            {
                count++;
            }
            
            return;
        }
        dfs(root -> left, mp);
        
        dfs(root -> right, mp);
    }

    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        vector<int> mp(10, 0);
        
        dfs(root, mp);
        
        return count;
    }
};