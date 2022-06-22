// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int n1,int n2,int n3,vector<int> &s1,vector<int> &s2,vector<int> &s3){
        int a=0;
        int b=0;
        int c=0;
        for(auto x:s1)
        {
            a+=x;
        }
        for(auto x:s2)
        {
            b+=x;
        }
        for(auto x:s3)
        {
            c+=x;
        }
        int i=0;
        int j=0;
        int k=0;
          while(i<n1 && j<n2 && k<n3)
          {
         
            if(a == b && b == c) return a;
            int m=min(a,min(b,c));
            
            if(a!=m){
                a-=s1[i++];
            }
            if(b!=m){
                b-=s2[j++];
            }
            if(c!=m){
                c-=s3[k++];
            }
            
        }
        
        
        return 0;
        
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}  // } Driver Code Ends