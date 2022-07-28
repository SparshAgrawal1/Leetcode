class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0;
        int h=0;
        unordered_map<char,int> m;
        int ans=INT_MIN;
        while(h<n)
        {
            if(m.find(s[h])==m.end())
            {
                m[s[h]]=h;
                h++;
            }
            else
            {
                while(true)
                {
                    if(m.find(s[h])==m.end())
                    {
                        break;
                    }
                    m.erase(s[l]);
                    l++;
                }
                m[s[h]]=h;
                h++;
            }
            int p=m.size();
            ans=max(ans,p);
            // for(auto x:m)
            // {
            //     cout<<x.first<<" "<<x.second<<endl;
            // }
            // cout<<endl;
        }
        if(ans==INT_MIN)
        {
            return 0;
        }
        return ans;
    }
    
    
};