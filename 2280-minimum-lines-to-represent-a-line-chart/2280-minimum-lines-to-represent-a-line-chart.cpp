class Solution {
public:
    int minimumLines(vector<vector<int>>& v) {
        int ans=0;
        int n=v.size();
        if(n==1)
        {
            return ans;
        }
        sort(v.begin(),v.end());
        bool temp=false;
        // bool temp=false;
        long double curr;
        for(int i=1 ; i<n ; i++)
        {
            long double l=v[i][1]-v[i-1][1];
            long double h=v[i][0]-v[i-1][0];
            long double k=l/h;
            // cout<<k<<" ";
            if(temp==false)
            {
                ans++;
                curr=k;
                temp=true;
            }
            else
            {
                if(curr!=k)
                {
                    ans++;
                    curr=k;
                }
                    
            }
        }
        return ans;
        
    }
};