class Solution {
public:
    int xxxx(vector<int> &v, vector<int> &cost,int k,int dp[])
    {
        if(k>=v.size())
        {
            return 0;
        }
        if(dp[k]!=-1)
        {
            return dp[k];
        }
        int l1=v[k]+1;
        int l2=v[k]+7;
        int l3=v[k]+30;
        int h1=-1;
        int h2=-1;
        int h3=-1;
        for(int i=k ; i<v.size() ; i++)
        {
            if(v[i]>=l1)
            {
                h1=i;
                break;
            }
        }
        for(int i=k ; i<v.size() ; i++)
        {
            if(v[i]>=l2)
            {
                h2=i;
                break;
            }
            
        }
        for(int i=k ; i<v.size() ; i++)
        {
            if(v[i]>=l3)
            {
                h3=i;
                break;
            }
        }
        if(h1==-1)h1=v.size();
        if(h2==-1)h2=v.size();
        if(h3==-1)h3=v.size();

            int k1=cost[0]+xxxx(v,cost,h1,dp);

            int k2=cost[1]+xxxx(v,cost,h2,dp);

            int k3=cost[2]+xxxx(v,cost,h3,dp);

        dp[k]=min(k1,min(k2,k3));
        return dp[k];
    }
    int mincostTickets(vector<int>& v, vector<int>& cost) {
        int n=v.size();
        int ans=INT_MAX;
        int dp[n];
        for(int i=0 ; i<n ; i++)
        {
            dp[i]=-1;
        }
        return xxxx(v,cost,0,dp);
        // return ans;
        
    }
};