// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int v[], int n){
        // code here
         vector<int> v1,v2;
        // int n=v.size();
        int l1=INT_MIN;
        for(int i=0 ; i<n ; i++)
        {
            l1=max(l1,v[i]);
            v1.push_back(l1);
        }
        l1=INT_MIN;
        for(int i=n-1 ; i>=0 ; i--)
        {
            l1=max(l1,v[i]);
            v2.push_back(l1);
        }
        reverse(v2.begin(),v2.end());
        long long ans=0;
        for(int i=0 ; i<n ; i++)
        {
            if(v1[i]>=v[i]&&v2[i]>=v[i])
            {
                int h=min(v1[i],v2[i]);
                ans+=(h-v[i]);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends