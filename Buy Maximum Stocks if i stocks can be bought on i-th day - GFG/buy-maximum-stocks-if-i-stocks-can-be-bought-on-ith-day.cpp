// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    static bool sbs(pair<int,int> a,pair<int,int> b)
    {
        if(a.first==b.first)
        {
            return a.second>b.second;
        }
        return a.first<b.first;
    }
    int buyMaximumProducts(int n, int k, int a[]){
        
        vector<pair<int,int>> v;
        for(int i=0 ; i<n ; i++)
        {
            v.push_back({a[i],i+1});
        }
        sort(v.begin(),v.end(),sbs);
        int ans=0;
        for(int i=0 ; i<n ; i++)
        {
            int l=k/v[i].first;
            if(l>=v[i].second)
            {
                ans+=v[i].second;
                k-=v[i].first*v[i].second;
            }
            else
            {
                ans+=l;
                k-=v[i].first*l;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends