class NumMatrix {
public:
    vector<vector<int>> a;
    NumMatrix(vector<vector<int>>& v) {
        vector<vector<int>> b;
        a=b;
        int n=v.size();
        int m=v[0].size();
        for(int i=0 ; i<n ; i++)
        {
            int l=0;
            vector<int> h;
            for(int j=0 ; j<m ; j++)
            {
                l+=v[i][j];
                h.push_back(l);
            }
            a.push_back(h);
        }

    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        // r1--;
        // c1--;
        // r2--;
        // c2--;
        int ans=0;
        // for(auto x:a)
        // {
        //     for(auto y:x)
        //     {
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        for(int i=r1 ; i<=r2 ; i++)
        {
            ans+=a[i][c2];
            if(c1-1>=0)
            {
                ans-=a[i][c1-1];
            }
        }
        return ans;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */