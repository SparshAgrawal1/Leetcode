class Solution {
public:
    bool static sbs(const pair<int,int> &a,const pair<int,int> &b)
    {
        if(a.first==b.first)
        {
            return a.second>b.second;
        }
        return a.first<b.first;
    }
    int maxEnvelopes(vector<vector<int>>& v) {
        vector<pair<int,int>> p;
        for(auto x:v)
        {
            p.push_back({x[0],x[1]});
        }
        sort(p.begin(),p.end(),sbs);
        vector<int> f;
        for(auto x:p)
        {
            f.push_back(x.second);
        }
        vector<int> ans;
        ans.push_back(f[0]);
        for(int i=1 ; i<f.size() ; i++)
        {
            if(f[i]>ans.back())
            {
                ans.push_back(f[i]);
            }
            else
            {
                int c= lower_bound(ans.begin(),ans.end(),f[i])-ans.begin();
                ans[c]=f[i];
            }
        }
        return ans.size();
        
    }
};