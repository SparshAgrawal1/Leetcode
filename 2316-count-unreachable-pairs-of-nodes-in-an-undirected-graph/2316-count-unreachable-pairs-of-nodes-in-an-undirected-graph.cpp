class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& v) {
        map<int,vector<int>> m;
        for(int i=0  ;i<v.size() ; i++)
        {
            m[v[i][0]].push_back(v[i][1]);
            m[v[i][1]].push_back(v[i][0]);
        }
       bool s[n];
        for(int i=0 ; i<n ; i++)
        {
            s[i]=false;
        }
        // long long ans=fact(n);
        // vector<
        vector<long long> p;
        for(int i=0 ; i<n ; i++)
        {
            if(s[i]==false)
            {
                queue<int> q;
                q.push(i);
                s[i]=true;
                long long curr=1;
                while(q.empty()==false)
                {
                    int l=q.front();
                    q.pop();
                    for(auto x:m[l])
                    {
                        if(s[x]==false)
                        {
                            q.push(x);
                            s[x]=true;
                            curr++;
                        }
                    }
                }
                p.push_back(curr);
            }
        }
        long long ans=0;
        vector<long long> w;
        long long temp=0;
        for(int i=p.size()-1 ; i>=0 ; i--)
        {
            temp+=p[i];
            w.push_back(temp);
        }
        reverse(w.begin(),w.end());
        for(int i=0 ; i<p.size()-1 ; i++)
        {
            ans+=p[i]*w[i+1];
        }
       
        
        return ans;
        
    }
};