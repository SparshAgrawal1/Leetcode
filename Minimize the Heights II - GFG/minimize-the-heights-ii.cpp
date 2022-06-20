// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int a[], int n, int k) {
        // code here
        int a1=INT_MAX;
        int a2=INT_MIN;
        for(int i=0 ; i<n ; i++)
        {
            a1=min(a1,a[i]);
            a2=max(a2,a[i]);
        }
        int ans=a2-a1;
        sort(a,a+n);
        for (int i=1 ; i<n ; i++)
        {
            int t1= min(a[0]+k, a[i] - k);
            int t2= max(a[i-1]+k, a[n-1] - k);
            if(t1 < 0)
            {
                continue;
            }
            ans = min(ans, t2 - t1);
        }
            
    
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends