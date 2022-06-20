class Solution {
public:
    int findDuplicate(vector<int>& v) {
        map<int,int> m;
        for(auto x:v)
        {
            m[x]++;
        }
        int p=-1;
        for(auto x:m)
        {
            if(x.second>1)
            {
                p= x.first;
                break;
            }
        }
        return p;
    }
};