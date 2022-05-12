class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int k) {
        int n=v.size();
        int m=v[0].size();
        int l=0;
        int h=n-1;
        while(l<=h)
        {
            int k1=h-(h-l)/2;
            int temp=-1;
            int l1=0;
            int h1=m-1;
            while(l1<=h1)
            {
                int k2=h1-(h1-l1)/2;
                if(v[k1][k2]<k)
                {
                    l1=k2+1;
                }
                else if(v[k1][k2]>k)
                {
                    h1=k2-1;
                }
                else
                {
                    return true;
                }
            }
            if(l1==0&&h1==l1-1)
            {
                h=k1-1;
            }
            else if(h1==m-1&&l1==h1+1)
            {
                l=k1+1;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
};