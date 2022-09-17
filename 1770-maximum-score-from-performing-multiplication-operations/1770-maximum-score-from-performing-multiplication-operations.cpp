class Solution {
public:
    
    // declare a dp
    
    vector<vector<int>> dp;
    
    int helper(vector<int>& a, int l, int h, int k, int m, vector<int>& b)
    {
        // base case
        
        if(k == m)
            return 0;
        if(dp[k][l] != INT_MIN)
            return dp[k][l];
        int from_front = a[l] * b[k] + helper(a, l + 1, h, k + 1, m, b);
        int from_back = a[h] * b[k] + helper(a, l, h - 1, k + 1, m, b);
        return dp[k][l] = max(from_front, from_back);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multiplier) {  
        int n = nums.size();      
        int m = multiplier.size();
        dp.resize(m + 1);
        dp.assign(m + 1, vector<int> (m + 1, INT_MIN));
        return helper(nums, 0, n - 1, 0, m, multiplier);
    }
};