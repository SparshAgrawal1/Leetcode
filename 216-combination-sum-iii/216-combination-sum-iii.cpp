class Solution {
public:
    void xxxx(int k,int n, vector<vector<int>> &f, vector<int> &v, int l)
    {
        if(k==0)
        {
            f.push_back(v);
            return;
        }
        for(int i=l ; i<=n ; i++)
        {
            v.push_back(i);
            xxxx(k-1,n,f,v,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> f;
        vector<int> v;
        int m=9;
        xxxx(k,m,f,v,1);
        // return f;
        vector<vector<int>> p;
        for(auto x:f)
        {
            int ans=0;
            for(auto y:x)
            {
                ans+=y;
            }
            if(ans==n)
            {
                p.push_back(x);
            }
        }
        return p;
        
    }
};