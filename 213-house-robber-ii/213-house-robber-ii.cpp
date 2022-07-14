class Solution {
public:
    int rob(vector<int>& v) {
        int n=v.size();
        int ans=INT_MIN;
        if(n==1)
        {
            return v[0];
        }
        for(int i=0 ; i<n ; i++)
        {
            
            vector<int> f;
            f.push_back(0);
            for(int j=i ; j<n ; j++)
            {
                f.push_back(v[j]);
            }
            for(int j=0 ; j<i ; j++)
            {
                f.push_back(v[j]);
            }
            // for(auto x:f)
            // {
            //     cout<<x<<" ";
            // }
            // cout<<endl;
            int m=n+1;
            int dp[m+1];
            dp[0]=0;
            for(int j=1 ; j<=m ; j++)
            {
                if(j-2>=0)
                {
                    dp[j]=max(dp[j-2]+f[j-1],dp[j-1]);
                }
                else
                {
                    dp[j]=max(f[j-1],dp[j-1]);
                }
            }
            cout<<dp[m]<<endl;
            ans=max(ans,dp[n]);
        }
        return ans;
        
    }
};