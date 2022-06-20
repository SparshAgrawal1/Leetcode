// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans=INT_MIN;
	    int temp=-1;
	    int l=0;
	    for(auto x:arr)
	    {
	        int c=0;
	        for(auto y:x)
	        {
	            if(y==1)
	            {
	                c++;
	            }
	        }
	       // cout<<c<<end/l;
	        if(c>ans)
	        {
	            ans=c;
	            temp=l;
	        }
	        l++;
	       // ans=max(ans,c);
	    }
	    if(ans==0)
	    {
	        return -1;
	    }
	    return temp;
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends