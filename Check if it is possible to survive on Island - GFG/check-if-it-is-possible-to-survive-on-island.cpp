// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int s, int n, int m){
        // code here
        int l=n/m;
        if (((n * 6) < (m * 7) && s > 6) || m > n)
        {
            return -1;
        }
        else
        {
                int ans=s*m/n;
                if((s*m)%n!=0)
                {
                    ans++;
                }
                return ans;
            // }
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}  // } Driver Code Ends