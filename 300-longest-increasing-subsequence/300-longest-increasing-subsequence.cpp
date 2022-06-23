class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        int n=v.size();
        int dp[n];
        for(int i=0 ; i<n ; i++)
        {
            dp[i]=1;
        }
        for(int i=n-1 ; i>=0 ; i--)
        {
            for(int j=i+1 ; j<n  ; j++)
            {
                if(v[j]>v[i])
                {
                    dp[i]=max(dp[i],1+dp[j]);
                }
                
            }
        }
        int l=INT_MIN;
        for(int i=0 ; i<n ; i++)
        {
            l=max(l,dp[i]);
        }
        return l;
        
        
    }
};