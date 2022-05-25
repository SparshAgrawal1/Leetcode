class Solution {
public:
    
    int longestValidParentheses(string s) {
        int n=s.length();
        int x1=0;
        int x2=0;
        int ans=INT_MIN;
        for(int i=0 ; i<n ; i++)
        {
            if(s[i]=='(')
            {
                x1++;
            }
            else
            {
                x2++;
            }
            if(x1==x2)
            {
                ans=max(ans,x1*2);
            }
            else if(x2>x1)
            {
                x1=0;
                x2=0;
                
            }
        }
            x1=0;
            x2=0;
            for(int i=n-1 ; i>=0 ; i--)
            {
                if(s[i]==')')
                {
                    x2++;
                }
                else
                {
                    x1++;
                }
                if(x1==x2)
                {
                    ans=max(ans,2*x1);
                }
                else if(x1>x2)
                {
                    x1=0;
                    x2=0;
                }
            }
            return max(ans,0);
            
        
    }
};