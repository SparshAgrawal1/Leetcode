class Solution {
public:
    int findMin(vector<int>& v) {
        sort(v.begin(),v.end());
        return v[0];
        
    }
};