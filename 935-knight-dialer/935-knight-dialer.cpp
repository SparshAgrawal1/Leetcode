class Solution {
public:
    int mod=1000000007;
    void xxxx(map<int,vector<int>> m,int n,int l, int curr, int &f)
    {
        if(n==0)
        {
            f++;
            f=f%mod;
            return;
        }
        for(auto x:m[l])
        {
            
            int k=n-1;
            xxxx(m,k,x,curr,f);
        }
        return;
        
    }
    int knightDialer(int n) {
         map<int,vector<int>> m={
            {1,{6,8}},{2,{7,9}},{3,{4,8}},
            {4,{0,3,9}},{5,{}},{6,{0,1,7}},
            {7,{2,6}},{8,{1,3}},{9,{2,4}},
            {0,{4,6}}
        };
        int dp[n+1][10];
        for(int i=0 ; i<10 ; i++)
        {
            dp[0][i]=0;
        }
        for(int i=0 ; i<10 ; i++)
        {
            dp[1][i]=1;
        }
        for(int i=2 ; i<=n ; i++)
        {
            
            for(int j=0 ; j<10 ; j++)
            {
                int curr=0;
                for(auto x:m[j])
                {
                    curr+=dp[i-1][x];
                    curr=curr%mod;
                }
                dp[i][j]=curr;
            }
        }
        // for(int i=0 ; i<=n ; i++)
        // {
        //     for(int j=0 ; j<10 ; j++)
        //     {
        //         cout<<dp[i][j]<< " ";
        //     }
        //     cout<<endl;
        // }
        int ans=0;
        for(int i=0 ; i<10 ; i++)
        {
            ans+=dp[n][i];
            ans=ans%mod;
        }
        return ans;
        
    }
};