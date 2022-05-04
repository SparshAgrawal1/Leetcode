class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& v) {
        vector<int> f;
        map<int,vector<int>> m;
        for(int i=0 ; i<v.size() ; i++)
        {
            for(int j=0 ; j<v[i].size() ; j++)
            {
                m[i+j].push_back(v[i][j]);
            }
        }
        for(auto x:m)
        {
            vector<int> p=m[x.first];
            reverse(p.begin(),p.end());
            for(auto y:p)
            {
                f.push_back(y);
            }
        }
        return f;
    }
};
                 