class Solution {
public:
    bool yyyy(int x,int y,int n,vector<vector<string>> &a)
    {
        int l=x;
        int h=y;
        while(h>=0)
        {
            if(a[l][h]=="Q")
            {
                return false;
            }
            h--;
        }
        h=y;
        while(l>=0&&h>=0)
        {
            if(a[l][h]=="Q")
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
            if(a[l][h]=="Q")
            {
                return false;
            }
            l++;
            h--;
        }
        return true;
    }
    void xxxx(int l,int &ans, vector<vector<string>> &a,int n,vector<vector<string>> &f)
    {
        if(l==n)
        {
            ans++;
            // return;
            vector<string> b;
            for(int i=0 ; i<n ; i++)
            {
                string s="";
                for( int j=0 ; j<n ; j++)
                {
                    s+=a[i][j];
                }
                b.push_back(s);
            }
            f.push_back(b);
            return;
        }
        for(int i=0 ; i<n ; i++)
        {
            if(yyyy(i,l,n,a)==true)
            {
                a[i][l]="Q";
                xxxx(l+1,ans,a,n,f);
                a[i][l]=".";
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        int ans=0;
        vector<vector<string>> a;
        vector<vector<string>> f;
        for(int i=0  ; i<n ; i++)
        {
            vector<string> b;
            for(int j=0 ; j<n ; j++)
            {
                b.push_back(".");
            }
            a.push_back(b);
        }
        xxxx(0,ans,a,n,f);
        return f;
        
    }
};