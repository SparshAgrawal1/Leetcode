// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& a, int k){
        //Code here
        sort(a.begin(),a.end());
        int  ans=INT_MAX;
        int n=a.size();
        for(int i=0 ; i<n ; i++)
        {
            int l=a[i];
            auto h=lower_bound(a.begin()+i,a.end(),l+k);
            if(h==a.end())
            {
                ans=min(ans,i);
            }
            else
            {
                int h1=h-a.begin();
                // cout<<h1<<endl;
                if(a[h1]==l+k)
                {
                    ans=min(n-(h1-i+1),ans);
                }
                else
                {
                    h1--;
                    ans=min(n-(h1-i+1),ans);
                }
                
            }
        }
        // cout<<endl;
        return ans;
    }
};


// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        int ans = ob.removals(a,k);
        
        cout<<ans<<endl;
    }
}


  // } Driver Code Ends