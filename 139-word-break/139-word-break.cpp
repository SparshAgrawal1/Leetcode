class Solution {
public:
    bool xxxx(int l,int n,string s,set<string> q,vector<int> &dp)
    {
        if(l>=n)
        {
            return true;
        }
        if(dp[l]!=-1)
        {
            if(dp[l]==0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
            for(int j=l ; j<n ; j++)
            {
                string temp=s.substr(l,j-l+1);
                
                if(q.find(temp)!=q.end())
                {
                    int h=j+1;
                    if(xxxx(h,n,s,q,dp)==true)
                    {
                        dp[l]=1;
                        return true;
                    }
                }
            
            }
        dp[l]=0;
        return false;
    }
    bool wordBreak(string s, vector<string>& v) {
        set<string> q;
        int n=s.length();
        vector<int> dp;
        for(auto x:v)
        {
            
            q.insert(x);
        }
        for(auto x:s)
        {
            dp.push_back(-1);
        }
        int l=0;
        return xxxx(l,n,s,q,dp);
        
        
    }
};