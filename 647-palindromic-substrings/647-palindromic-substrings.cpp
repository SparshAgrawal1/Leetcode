class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0 ; i<n ;  i++)
        {
            int l=i;
            int h=i;
            while(l>=0&&h<n)
            {
                if(s[l]==s[h])
                {
                    ans++;
                    l--;
                h++;
                }
                else
                {
                    break;
                }
                
            }
        }
        for(int i=0 ; i<n-1 ; i++)
        {
            int l=i;
            int h=i+1;
            while(l>=0&&h<n)
            {
                if(s[l]==s[h])
                {
                    ans++;
                     l--;
                h++;
                }
                else
                {
                    break;
                }
               
            }
        }
        return ans;
    }
};