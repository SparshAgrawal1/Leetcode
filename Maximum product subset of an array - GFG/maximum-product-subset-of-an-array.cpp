// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long int findMaxProduct(vector<int>&a, int n){
        //Write your code here  
        long long int ans=1;
        long long int temp=INT_MIN;
        int l=0;
        int h=0;
        vector<int> f;
        for(int i=0 ; i<n ; i++)
        {
            if(a[i]>0)
            {
                ans=ans*a[i];
                ans=ans%1000000007;
            }
            else if(a[i]==0)
            {
                l++;
            }
            else if(a[i]<0)
            {
                h++;
                f.push_back(a[i]);
            }
        }
        sort(f.begin(),f.end());
        if(h%2==0)
        {
            for(int i=0 ; i<h ; i++)
            {
                ans=ans*f[i];
                ans=ans%1000000007;
            }
        }
        else
        {
            for(int i=0 ; i<h-1 ; i++)
            {
                ans=ans*f[i];
                ans=ans%1000000007;
            }
        }
        int p=n-(l+h);
        if(p==0)
        {
            if(l==0)
            {
                if(h==1)
                {
                    ans=f[0];
                    return ans;
                }
                else
                {
                    return ans;
                }
            }
            else
            {
                if(h==1)
                {
                    ans=0;
                    return ans;
                }
                else
                {
                    return ans;
                }
                
            }
        }
        return ans;
        
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
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    long long int ans = ob.findMaxProduct(arr, n);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends