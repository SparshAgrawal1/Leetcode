class Solution {
public:
    bool xxxx(vector<int> v,int n,int m,int k)
    {
        int c=1;
        int temp=v[0];
        for(int i=0 ; i<n ; i++)
        {
            if(v[i]-temp>=k)
            {
                c++;
                if(c==m)
                {
                    return true;
                }
                temp=v[i];
            }
        }
        return false;
    }
    int maxDistance(vector<int>& v, int m) {
        int n=v.size();
        sort(v.begin(),v.end());
        int l=0;
        int h=INT_MIN;
        for(auto x:v)
        {
            h=max(h,x);
        }
        int ans=-1;
        while(l<=h)
        {
            int k=l+(h-l)/2;
            if(xxxx(v,n,m,k))
            {
                ans=k;
                l=k+1;
            }
            else
            {
                h=k-1;
            }
        }
        return ans;
        
        
    }
};