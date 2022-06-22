// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &arr,int n){
        sort(arr.begin(),arr.end());
       long totsum=0;
       for(int i=0;i<n;i++)
       totsum+=arr[i];
       
       if(totsum==0) return n;
       int l=n-1;
       long sum=0;
       for(int j=n-1;j>=0;j--)
       {
           sum+=arr[j];
           totsum-=arr[j];
           if(totsum<sum)
           return n-j;
       }
       return 0;
        
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}  // } Driver Code Ends