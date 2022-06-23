// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int v[], int n)  
	{  
	   // int n=v.size();
        int dp[n];
        for(int i=0 ; i<n ; i++)
        {
            dp[i]=v[i];
        }
        for(int i=n-1 ; i>=0 ; i--)
        {
            for(int j=i+1 ; j<n  ; j++)
            {
                if(v[j]>v[i])
                {
                    dp[i]=max(dp[i],v[i]+dp[j]);
                    // break;
                }
                
            }
        }
        // for(int i=0 ; i<n ; i++)
        // {
        //     cout<<dp[i]<<" ";
        // }
        // cout<<endl;
        int l=INT_MIN;
        for(int i=0 ; i<n ; i++)
        {
            l=max(l,dp[i]);
        }
        return l;
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends