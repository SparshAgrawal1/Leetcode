class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int a[n][n];
        int l1=0;
        int h1=n-1;
        int l2=0;
        int h2=n-1;
        int k=1;
        while(true)
        {
            bool temp=false;
            if(l1==h1&&l2==h2&&l1==l2)
            {
                a[l1][l2]=k;
                break;
            }
            for(int i=l2 ; i<h2 ; i++)
            {
                temp=true;
                a[l1][i]=k;
                k++;
            }
            for(int i=l1 ; i<h1 ; i++)
            {
                temp=true;
                a[i][h2]=k;
                k++;
            }
            for(int i=h2 ; i>l2 ; i--)
            {
                temp=true;
                a[h1][i]=k;
                k++;
            }
            for(int i=h1 ; i>l1 ; i--)
            {
                temp=true;
                a[i][l2]=k;
                k++;
            }
            if(temp==false)
            {
                break;
            }
            else
            {
                l1++;
                h1--;
                l2++;
                h2--;
            }
        }
        vector<vector<int>> f;
        for(int i=0 ; i<n ; i++)
        {
            vector<int> v;
            for(int j=0 ; j<n ; j++)
            {
                v.push_back(a[i][j]);
                // cout<<a[i][j]<<" ";
            }
            f.push_back(v);
            // cout<<endl;
        }
        
        return f;
    }
};