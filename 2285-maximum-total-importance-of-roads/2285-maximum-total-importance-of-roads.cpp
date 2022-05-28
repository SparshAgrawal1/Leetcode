class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& v) {
        unordered_map<int,vector<int>> m;
        for(int i=0 ; i<v.size() ; i++)
        {
            
            m[v[i][0]].push_back(v[i][1]);
            m[v[i][1]].push_back(v[i][0]);
        }
        vector<pair<int,int>> f;
        for(auto x:m)
        {
            f.push_back({m[x.first].size(),x.first});
        }
        sort(f.begin(),f.end());
        reverse(f.begin(),f.end());
        unordered_map<int,int> p;
        int l=n;
        bool curr[n];
        for(int i=0 ; i<n ; i++)
        {
            curr[i]=false;
        }
        for(auto x:f)
        {
            p[x.second]=l;
            l--;
            curr[x.second]=true;
        }
        for(int i=0 ; i<n ; i++)
        {
            if(curr[i]==false)
            {
                curr[i]=true;
                p[i]=l;
                l--;
            }
        }
        long long ans=0;
        for(int i=0 ; i<v.size() ; i++)
        {
            ans+=p[v[i][0]];
            ans+=p[v[i][1]];
        }
        return ans;
            
        
    }
};