class Solution {
public:
    int longestSubstring(string s, int k) {
        map<int,int> m;
        for(auto x:s)
        {
            m[x]++;
        }
        int n=s.length();
        int j=0;
        int t1=0;
        int t2=0;
        int ans=INT_MIN;
        for(int i=0 ; i<n ; i++)
        {
            if(m[s[i]]<k)
            {
                t1=longestSubstring(s.substr(0,i),k);
                t2=longestSubstring(s.substr(i+1,n-(i+1)),k);
                break;
                
            }
            if(i==n-1)
            {
                return n;
            }
            
        }
        return max(t1,t2);
        if(ans==INT_MIN)
        {
            return n;
        }
        return ans;
        
    }
};