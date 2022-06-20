// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X)
    {
        //Your Code Here
         unordered_map<int,int> m;
    for(int i=0 ; i<n ; i++)
    {
        m[a[i]]++;
    }
    for(int i=0 ; i<n ; i++)
    {
        unordered_set<int> s;
         for(int j=i+1; j<n; j++){
             if(s.find(X-a[i]-a[j])!=s.end())
                    return true;
             s.insert(a[j]);
         }
    }
    // bool temp=true;
    return false;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends