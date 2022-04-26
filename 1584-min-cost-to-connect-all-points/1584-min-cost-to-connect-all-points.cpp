class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& v) {
        int n=v.size();
        int a[n][n];
        for(int i=0 ; i<n ; i++)
        {
            int l1=v[i][0];
            int l2=v[i][1];
            for(int j=i ; j<n ; j++)
            {
                int h1=v[j][0];
                int h2=v[j][1];
                int k=abs(h1-l1)+abs(h2-l2);
                a[i][j]=k;
                a[j][i]=k;
            }
        }
        // for(int i=0 ; i<n ; i++)
        // {
        //     for(int j=0 ; j<n ; j++)
        //     {
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        bool a1[n];
        for(int i=0 ; i<n ; i++)
        {
            a1[i]=false;
        }
        int a2[n];
        for(int i=0 ; i<n ; i++)
        {
            a2[i]=INT_MAX;
            // cout<<a1[i]<<endl;
        }
        a2[0]=0;
        int curr=0;
        int h=0;
        int k=1;
        while(k<=n)
        {
            for(int i=0 ; i<n ; i++)
            {
                if(a1[i]==false)
                {
               
                    a2[i]=min(a2[i],a[h][i]);
                }
            }
            int g=-1;
            int g1=INT_MAX;
            for(int i=0 ; i<n ; i++)
            {
                if(a1[i]==false)
                {
                      if(a2[i]<g1)
                      {
                          g1=a2[i];
                          g=i;
                      }
                    
                }
            }
            h=g;
            a1[h]=true;
            k++;
            // cout<<a2[h]<<endl;
            curr+=a2[h];
            
            
        }
        return curr;
        
    }
};