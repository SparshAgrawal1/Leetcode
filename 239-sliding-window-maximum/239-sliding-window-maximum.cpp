class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
        vector<int> v1;
        vector<int> v2;
        int l=INT_MIN;
        int n=v.size();
        queue<int> q;
        map<int,int,greater<int>> m;
        for(int i=0 ; i<k ; i++)
        {
            q.push(v[i]);
            m[v[i]]++;
        }
        vector<int> f;
        auto y=m.begin();
        f.push_back(y->first);
        for(int i=k ; i<n;  i++)
        {
           
            m[v[i]]++;
             m[v[i-k]]--;
            if(m[v[i-k]]==0)
            {
                m.erase(v[i-k]);
            }
            y=m.begin();
            f.push_back(y->first);
            
        }
        return f;
        
    }
};