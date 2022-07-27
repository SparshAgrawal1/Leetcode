class Solution {
public:
    bool xxxx(vector<int> v,int n,int m,int k)
    {
        int c=1;
        int curr=0;
        for(int i=0 ; i<n ; i++)
        {
            if(curr+v[i]<=k)
            {
                curr+=v[i];
            }
            else
            {
                c++;
                if(c>m||v[i]>k)
                {
                    return false;
                }
                curr=v[i];
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& v, int m) {
        int n=v.size();
        int l=0;
        int h=0;
        for(auto x:v)
        {
            l=max(l,x);
            h+=x;
        }
        int ans=-1;
        while(l<=h)
        {
            int k=l+(h-l)/2;
            if(xxxx(v,n,m,k))
            {
                ans=k;
                h=k-1;
            }
            else
            {
                l=k+1;
            }
            
        }
        return ans;
        
    }
};