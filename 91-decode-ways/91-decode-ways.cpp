class Solution {
public:
    int xxxx(string s,int n,int l,vector<int> &dp, vector<bool> &p)
    {
        if(l>=n)
        {
            return 1;
        }
        if(s[l]=='0'||p[l]==true)
        {
            return dp[l];
        }
        p[l]=true;
        if(s[l]=='1'||s[l]=='2')
        {

                int l1=l+1;
                int l2=l+2;

            if(l+1<n)
            {
                int g=s[l+1]-'0';
                if(s[l]=='1')
                {
                    dp[l]+=xxxx(s,n,l2,dp,p)+xxxx(s,n,l1,dp,p);
                }
                else if(s[l]=='2'&&g<=6)
                {
                    dp[l]+=xxxx(s,n,l2,dp,p)+xxxx(s,n,l1,dp,p);
                }
                else
                {
                    dp[l]+=xxxx(s,n,l1,dp,p);
                }

                
            }
            else
            {
                dp[l]+=xxxx(s,n,l1,dp,p);
            }
        }
        else
        {
            int l1=l+1;
            dp[l]+=xxxx(s,n,l1,dp,p);
        }
        return dp[l];

    }
    int numDecodings(string s) {
         int n=s.length();
    int l=0;
    bool temp=false;
    int ans=0;
        vector<int> dp;
        vector<bool> p;
        for(int i=0 ; i<n ; i++)
        {
            p.push_back(false);
            dp.push_back(0);
        }
    xxxx(s,n,l,dp,p);
    return dp[0];
        
    }
};