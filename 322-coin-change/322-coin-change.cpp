class Solution {
public:
    int coinChange(vector<int>& v, int k) {
        int n=v.size();
        int dp[k+1];
        for(int i=1 ; i<=k ; i++)
        {
            dp[i]=INT_MAX;
        }
        dp[0]=0;
        for(int i=1 ; i<=k ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                if(v[j]<=i&&dp[i-v[j]]!=INT_MAX)
                {
                    dp[i]=min(dp[i],dp[i-v[j]]+1);
                }
                
            }
        }
        if(dp[k]==INT_MAX)
        {
            return -1;
        }
        else
        {
            return dp[k];
        }
    }
};