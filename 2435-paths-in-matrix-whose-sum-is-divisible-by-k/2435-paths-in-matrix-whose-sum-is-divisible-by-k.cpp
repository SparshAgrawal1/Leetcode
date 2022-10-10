class Solution {
public:
    // vector<vector<vector<int>>> dp;
    int mod = 1e9 + 7;
    
    int xxxx(vector<vector<int>> &v,int sum,int k,int l,int h,int n,int m,vector<vector<vector<int>>> &dp)
    {
        if(l<0||h<0||l>=n||h>=m)
        {
            return 0;
        }
        if(l==n-1&&h==m-1)
        {
            sum+=v[l][h];
            if(sum%k==0)
            {
                return 1;
            }
            return 0;
        }
        if(dp[l][h][sum%k]!=-1)
        {
            return dp[l][h][sum%k];
        }
        int l1=xxxx(v,sum+v[l][h],k,l+1,h,n,m,dp);
        int h1=xxxx(v,sum+v[l][h],k,l,h+1,n,m,dp);
        return dp[l][h][sum%k]=(l1%mod+h1%mod)%mod;
    }
    int numberOfPaths(vector<vector<int>>& v, int k) {
        
        int n=v.size();
        int m=v[0].size();
        vector<vector<vector<int>>> dp(v.size(),vector<vector<int>>(v[0].size(),vector<int>(51,-1)));
        return xxxx(v,0,k,0,0,n,m,dp);
        
        
        
    }
};