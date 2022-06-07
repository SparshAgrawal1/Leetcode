class Solution {
public:
    bool yyyy(int x,int y,int n,vector<vector<int>> &a)
    {
        int l=x;
        int h=y;
        while(h>=0)
        {
            if(a[l][h]==1)
            {
                return false;
            }
            h--;
        }
        h=y;
        while(l>=0&&h>=0)
        {
            if(a[l][h]==1)
            {
                return false;
            }
            l--;
            h--;
        }
        l=x;
        h=y;
        while(l<n&&h>=0)
        {
            if(a[l][h]==1)
            {
                return false;
            }
            l++;
            h--;
        }
        return true;
    }
    void xxxx(int l,int &ans, vector<vector<int>> &a,int n)
    {
        if(l==n)
        {
            ans++;
            return;
        }
        for(int i=0 ; i<n ; i++)
        {
            if(yyyy(i,l,n,a)==true)
            {
                a[i][l]=1;
                xxxx(l+1,ans,a,n);
                a[i][l]=0;
            }
        }
    }
    int totalNQueens(int n) {
        int ans=0;
        vector<vector<int>> a;
        for(int i=0  ; i<n ; i++)
        {
            vector<int> b;
            for(int j=0 ; j<n ; j++)
            {
                b.push_back(0);
            }
            a.push_back(b);
        }
        xxxx(0,ans,a,n);
        return ans;
        
    }
};