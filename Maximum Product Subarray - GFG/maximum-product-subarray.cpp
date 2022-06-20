// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> a, int n) {
	    long long temp=a[0];
	    long long a1=a[0];
	    long long a2=a[0];
	    for(int i=1 ; i<n ; i++)
	    {
	       // long long curr=temp*a[i];
	        if(a[i]<0)
	        {
	            swap(a1,a2);
	           // ans=max(ans,curr);
	           // temp=curr;
	        }
	        a1=max((long long)a[i],a[i]*a1);
	        a2=min((long long)a[i],a[i]*a2);
	        temp=max(temp,a1);
	    }
	    return temp;
	    // code here
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends