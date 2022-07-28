class Solution {
public:
    void xxxx(vector<int> v,int n,int l,vector<int> p,set<vector<int>> &f)
    {
        if(l>=n)
        {
            f.insert(p);
            return;
        }
        vector<int> p1=p;
        vector<int> p2=p;
        p1.push_back(v[l]);
        xxxx(v,n,l+1,p1,f);
        xxxx(v,n,l+1,p2,f);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        sort(v.begin(),v.end());
        set<vector<int>> f;
        vector<int> temp;
        xxxx(v,v.size(),0,temp,f);
        vector<vector<int>> g;
        for(auto x:f)
        {
            g.push_back(x);
        }
        return g;
    }
};