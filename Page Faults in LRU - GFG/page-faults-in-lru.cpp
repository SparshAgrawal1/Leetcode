// { Driver Code Starts
// Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int pageFaults(int n, int c, int v[]){
        // code here
        unordered_set<int> s;
        queue<int> q;
        int ans=0;
        for(int i=0 ; i< n; i++)
        {
            if(q.size()<c)
            {
                if(s.find(v[i])==s.end())
                {
                    s.insert(v[i]);
                    q.push(v[i]);
                    ans++;
                }
                else
                {
                    queue<int> p;
                    while(q.size()>0)
                    {
                        if(q.front()!=v[i])
                        {
                            p.push(q.front());
                        }
                        q.pop();
                    }
                    p.push(v[i]);
                    q=p;
                }
            }
            else
            {
                if(s.find(v[i])==s.end())
                {
                    int l=q.front();
                    q.pop();
                    s.erase(l);
                    q.push(v[i]);
                    s.insert(v[i]);
                    ans++;
                }
                else
                {
                     queue<int> p;
                    while(q.size()>0)
                    {
                        if(q.front()!=v[i])
                        {
                            p.push(q.front());
                        }
                        q.pop();
                    }
                    p.push(v[i]);
                    q=p;
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, C;
        cin>>N;
        int pages[N];
        for(int i = 0;i < N;i++)
            cin>>pages[i];
        cin>>C;
        
        Solution ob;
        cout<<ob.pageFaults(N, C, pages)<<"\n";
    }
    return 0;
}  // } Driver Code Ends