// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int n, int m, int v[], int w[])
    {
        int dp[n+1][m+1];
        for(int i=0 ; i<=n ; i++)
        {
            dp[i][0]=0;
        }
        for(int i=0 ; i<=m ; i++)
        {
            dp[0][i]=0;
        }
        for(int i=1 ; i<=n ; i++)
        {
            for(int j=1 ; j<=m ; j++)
            {
                if(w[i-1]<=j)
                {
                    dp[i][j]=max(dp[i-1][j],v[i-1]+dp[i][j-w[i-1]]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][m];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends