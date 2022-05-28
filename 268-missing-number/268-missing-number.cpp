class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int c=0;
        int d=0;
        for(int i=0 ; i<=n ; i++)
        {
            c = c^i;
        }
        for(int i=0 ; i<n ; i++)
        {
            d= d^nums[i];
        }
        return c^d;
    }
};