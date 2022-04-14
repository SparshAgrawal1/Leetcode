class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& v, int k) {
        int n=v.size();
        int m=v[0].size();
        int l=n*m;
        k=k%l;
        vector<int> p;
        for(auto x:v)
        {
            for(auto y:x)
            {
                p.push_back(y);
            }
        }
        vector<int> a;
        for(int i=p.size()-k ; i<p.size() ; i++)
        {
            a.push_back(p[i]);
        }
        for(int i=0 ; i<p.size()-k ; i++)
        {
            a.push_back(p[i]);
        }
        
        vector<vector<int>> f1;
        int h=0;
        for(int i=0 ; i<a.size() ; i +=m)
        {
            vector<int> f2,f3;
            for(int j=i  ; j<i+m ; j++)
            {
                f2.push_back(a[j]);
            }
            f1.push_back(f2);
        }
        // f1.push_back(f2);
        return f1;
        
    }
};