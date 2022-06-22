// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // static bool sbs(pair<int,int> a,pair<int,int> b)
    // {
    //     return a.second<b.second;
    // }
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int a[], int d[], int n)
    {
    	// Your code here
    	vector<pair<int,int>> v;
    	for(int i=0 ; i<n ; i++)
    	{
    	    v.push_back({a[i],d[i]});
    	}
    	sort(v.begin(),v.end());
    	priority_queue<int,vector<int>,greater<>> p;
    	p.push(v[0].second);
    	int ans=1;
    	for(int i=1 ; i<n ; i++)
    	{
    	    if(p.top()<v[i].first)
    	    {
    	        p.pop();
    	        p.push(v[i].second);
    	    }
    	    else
    	    {
    	        ans++;
    	        p.push(v[i].second);
    	    }
    	}
    	return ans;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends