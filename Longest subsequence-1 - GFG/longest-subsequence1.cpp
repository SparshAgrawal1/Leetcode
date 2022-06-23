// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int longestSubsequence(int n, int a[])
    {
        // code here
        int dp[n];
        for(int i=0 ; i<n ; i++)
        {
            dp[i]=1;
        }
        for(int i=n-1 ; i>=0 ; i--)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                if(abs(a[j]-a[i])==1)
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        int l=INT_MIN;
        for(int i=0 ; i<n  ;i++)
        {
            l=max(l,dp[i]);
            // cout<<dp[i]<<" ";
        }
        // cout<<endl;
        return l;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends