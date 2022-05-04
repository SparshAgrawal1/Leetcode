class Solution {
public:
    int findUnsortedSubarray(vector<int>& v) {
        vector<pair<int,int>> p;
        int n=v.size();
        for(int i=0 ; i<n ; i++)
        {
            p.push_back({v[i],i});
        }
        int ans=0;
        vector<int> f;
        sort(p.begin(),p.end());
        for(int i=0 ; i<n ; i++)
        {
            if(p[i].second!=i)
            {
                // ans++;
                f.push_back(i);
            }
        }
        if(f.size()==0)
        {
            return 0;
        }
        return f[f.size()-1]-f[0]+1;
        
    }
};