// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int a1[], int a2[], int n, int m) {
	    int l1=0;
        int l2=0;
        vector<int> v;
        int count=0;
        int g=-1;
        while(true)
        {
            if(l1==n&&l2==m)
            {
                break;
            }
            else if(l1==n&&l2<m)
            {
                g=a2[l2];
                v.push_back(a2[l2]);
                l2++;
            }
            else if(l2==m&&l1<n)
            {
                g=a1[l1];
                v.push_back(a1[l1]);
                l1++;
            }
            else
            {
                if(a1[l1]<=a2[l2])
                {
                    g=a1[l1];
                    v.push_back(a1[l1]);
                    l1++;
                }
                else
                {
                    g=a2[l2];
                    v.push_back(a2[l2]);
                    l2++;
                }
            }
            
            
        }
        l1=0;
        for(int i=0 ; i<n ; i++)
        {
            a1[i]=v[l1];
            l1++;
        }
        for(int i=0 ; i<m ; i++)
        {
            a2[i]=v[l1];
            l1++;
        }
        // return v;
        // int h=0;
        // bool flag=false;
        // for(auto x:v)
        // {
        //     // cout<<x<<endl;
        //     if(flag==false)
        //     {
        //         a1[h]=x;
        //         h++;
        //         if(h==n)
        //         {
        //             h=0;
        //             flag=true;
        //         }
        //     }
        //     else
        //     {
        //         a2[h]=x;
        //         h++;
        //     }
            
        // }
	   // int l1=n-1;
	   // int l2=m-1;
	   // while(l1>=0)
	   // {
	   //     if(a1[l1]<=a2[l2])
	   //     {
	   //         l2--;
	   //     }
	   //     else
	   //     {
	   //         swap(a1[l1],a2[l2]);
	   //        // sort(a2,a2+m);
	   //         l1--;
	   //     }
	   // }
	    
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends