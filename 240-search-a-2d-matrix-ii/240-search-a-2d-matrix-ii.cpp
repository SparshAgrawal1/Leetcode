class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int k) {
        int n=v.size();
        int m=v[0].size();
        for(int i=0 ; i<m ; i++)
        {
            int l=0;
            int h=n-1;
            while(l<=h)
            {
                int m=h-(h-l)/2;
                if(v[m][i]==k)
                {
                    return true;
                }
                else if(v[m][i]<k)
                {
                    l=m+1;
                }
                else
                {
                    h=m-1;
                }
            }
        }
        return false;
        
    }
};