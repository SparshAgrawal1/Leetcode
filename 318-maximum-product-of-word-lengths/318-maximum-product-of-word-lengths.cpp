class Solution {
public:
    int maxProduct(vector<string>& v) {
        int n=v.size();
        vector<set<char>> p;
        for(auto x:v)
        {
            set<char> s;
            for(auto y:x)
            {
                s.insert(y);
            }
            p.push_back(s);
        }
        int curr=INT_MIN;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                bool temp=false;
                for(auto x:p[i])
                {
                    if(p[j].find(x)!=p[j].end())
                    {
                        temp=true;
                        break;
                    }
                }
                if(temp==false)
                {
                    int l=v[i].length()*v[j].length();
                    curr=max(curr,l);
                }
            }
        }
        if(curr==INT_MIN)
        {
            return 0;
        }
        return curr;
        
    }
};