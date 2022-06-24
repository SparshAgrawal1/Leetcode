// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      //Code here
      int n=a.size();
      int dp[n];
      dp[0]=a[0];
      for(int i=1 ; i<n ; i++)
      {
          dp[i]=min(dp[i-1]+a[i],a[i]);
      }
      int l=INT_MAX;
      for(int i=0 ; i<n ; i++)
      {
          l=min(l,dp[i]);
        //   cout<<dp[i]<<" ";
      }
    //   cout<<endl;
      return l;
  }
};


// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        
        int ans = ob.smallestSumSubarray(a);
        
        cout<<ans<<endl;
    }
}  // } Driver Code Ends