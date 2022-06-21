// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here      
        long long int a=1;
        map<long long int ,int> m;
        for(auto x:nums)
        {
            a=a*x;
            m[x]++;
        }
        long long int c=1;
        for(auto x:nums)
        {
            if(x!=0)
            {
                c=c*x;
            }
        }
        vector<long long int> b;
        for(auto x:nums)
        {
            if(x!=0)
            {
                b.push_back(a/x);
            }
            else
            {
                if(m[x]>1)
                {
                    b.push_back(0);
                }
                else
                {
                    b.push_back(c);
                }
            }
            
        }
        return b;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends