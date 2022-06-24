// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    vector<vector<long long>> v;
    long long solve(int a[],int i,int j,int n){
       long long  x=0,y=0;
       if(i>=j) return 0;
      if(v[i][j]!=-1) return v[i][j];
       x=a[i]+min(solve(a,i+2,j,n),solve(a,i+1,j-1,n));
       y=a[j]+min(solve(a,i+1,j-1,n),solve(a,i,j-2,n));
       return v[i][j]= max(x,y);
       
   }
    long long maximumAmount(int a[], int n){
        v.resize(n+1,vector<long long>(n+1,-1));
       return solve(a,0,n-1,n);
        // Your code here
    }
};

// { Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends