// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int n, vector<vector<int>> m)
    {
        // code h
        int dp[n][n];
        for(int i=0 ; i<n ;  i++)
        {
            dp[0][i]=m[0][i];
        }
        for(int i=1 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                int l1=INT_MIN;
                int l2=INT_MIN;
                int l3=INT_MIN;
                l1=dp[i-1][j];
                if(j+1<n)
                {
                    l2=dp[i-1][j+1];
                }
                if(j-1>=0)
                {
                    l3=dp[i-1][j-1];
                }
                int l=max(l1,l2);
                l=max(l,l3);
                dp[i][j]=l+m[i][j];
            }
        }
        int h=INT_MIN;
        for(int i=0  ; i<n ; i++)
        {
            h=max(h,dp[n-1][i]);
        }
        
        return h;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  // } Driver Code Ends