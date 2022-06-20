// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int a[], int n, int k) {
        // code here
        map<int,int> m;
        set<pair<int ,int>> s;
        for(int i=0 ; i<n ; i++)
        {
            m[a[i]]++;
        }
        int ans=0;
        for(int i=0 ; i<n ; i++)
        {
            int l=a[i];
            int h=k-l;
            if(l==h)
            {
                if(m.find(h)!=m.end()&&m[h]>1)
                {
                    ans+=(m[h]-1);
                    // s.insert({min(l,h),max(l,h)});
                }
            }
            else
            {
                if(m.find(h)!=m.end())
                {
                    // cout<<l<<" "<<h<<endl;
                    ans+=m[h];
                    // s.insert({min(l,h),max(l,h)});
                }
            }
            
        }
        return ans/2;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends