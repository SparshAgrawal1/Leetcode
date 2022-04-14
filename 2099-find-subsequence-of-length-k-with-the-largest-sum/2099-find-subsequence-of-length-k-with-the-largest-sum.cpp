class Solution {
public:
    vector<int> maxSubsequence(vector<int>& v, int k) {
       
       vector<pair<int,int>> p;
        vector<int> f;
        map<int,int> m;
        int l=k;
        for(int i=0 ; i<v.size() ; i++)
        {
            p.push_back({v[i],i+1});
        }
        sort(p.begin(),p.end());
        for(int i=v.size()-1 ; i>=0 ; i--)
        {
            m[p[i].second]=p[i].first;
            l--;
            if(l==0)
            {
                break;
            }
        }
        for(auto x:m)
        {
            f.push_back(x.second);
        }
        return f;
        
    }
};