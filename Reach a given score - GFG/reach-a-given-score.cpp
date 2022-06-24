// { Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 // } Driver Code Ends
// Complete this function
long long int count(long long int n)
{
	               vector<long long int > v;
	               v.push_back(3);
	               v.push_back(5);
	               v.push_back(10);
	               int dp[4][n+1];
	               for(int i=0 ; i<4 ; i++)
	               {
	                   dp[i][0]=1;
	               }
	               for(int i=1 ; i<=n ; i++)
	               {
	                   dp[0][i]=0;
	               }
	               for(int i=1 ; i<=3 ; i++)
	               {
	                   for(int j=1 ; j<=n ; j++)
	                   {
	                       if(v[i-1]<=j)
	                       {
	                           dp[i][j]=dp[i-1][j]+dp[i][j-v[i-1]];
	                       }
	                       else
	                       {
	                           dp[i][j]=dp[i-1][j];
	                       }
	                   }
	               }
	               //for(int i=0 ; i<=3 ; i++)
	               //{
	               //    for(int j=0 ; j<=n ; j++)
	               //    {
	               //        cout<<dp[i][j]<<" ";
	               //    }
	               //    cout<<endl;
	               //}
	               return dp[3][n];
	
	
}

// { Driver Code Starts.



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<count(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends