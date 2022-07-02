class Solution {
public:
    static bool sbs(const vector<int> &a,const vector<int> &b)
{
    
    return a[1]<b[1];
    
}
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        sort(a.begin(),a.end(),sbs);
    int ans=1;
    int curr=a[0][1];
    int n=a.size();
    for(int i=1 ; i<n ; i++)
    {
        if(a[i][0]>=curr)
        {
            curr=a[i][1];
            ans++;
        }
    }
    return n-ans;
    }
};