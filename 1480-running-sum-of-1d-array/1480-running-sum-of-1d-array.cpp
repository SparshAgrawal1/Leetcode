class Solution {
public:
    vector<int> runningSum(vector<int>& v) {
        vector<int> f;
        int l=0;
        for(auto x:v)
        {
            l+=x;
            f.push_back(l);
        }
        return f;
        
    }
};