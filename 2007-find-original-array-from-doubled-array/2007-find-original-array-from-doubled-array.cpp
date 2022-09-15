class Solution {
public:
    vector<int> findOriginalArray(vector<int>& v) {
        sort(v.begin(),v.end());
        vector<int> p;
        map<int,int> m;
        for(auto x:v)
        {
            m[x]++;
        }
        vector<int> p1;
        for(auto x:v)
        {
            if(m.find(x)!=m.end())
            {
                int l=x;
                int h=2*x;
                m[l]--;
                if(m[l]==0)
                {
                    m.erase(l);
                }
                if(m.find(h)!=m.end())
                {
                    m[h]--;
                    if(m[h]==0)
                    {
                        m.erase(h);
                    }
                    p.push_back(l);
                }
                else
                {
                    return p1;
                }
            }
            
        }
        return p;
        
    }
};