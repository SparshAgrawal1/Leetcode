// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    vector<int > v;
    int l=0; 
    int h=n-1;
    while(l<h)
    {
        v.push_back(arr[l]);
        v.push_back(arr[h]);
        l++;
        h--;
    }
    if(l==h)
    {
        v.push_back(arr[l]);
    }
    long long int ans=0;
    for(int i=1 ; i<n ; i++)
    {
        ans+=abs(v[i]-v[i-1]);
    }
    ans+=abs(v[n-1]-v[0]);
    return ans;
}