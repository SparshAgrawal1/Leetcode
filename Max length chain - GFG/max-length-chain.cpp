// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
//Your code here
sort(p, p+n, [](auto a, auto b){
       return a.second < b.second;
   });
    int dp[n];
    for(int i=0 ; i<n ; i++)
    {
        dp[i]=1;
    }
    for(int i=n-1 ; i>=0 ; i--)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(p[j].first>p[i].second)
            {
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
    }
    int l=INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        l=max(l,dp[i]);
        // cout<<dp[i]<<" ";
    }
    // cout<<endl;
    return l;
}