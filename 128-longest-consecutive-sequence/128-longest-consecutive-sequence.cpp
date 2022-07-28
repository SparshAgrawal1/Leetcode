class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        sort(v.begin(),v.end());
        int l=-1;
        int n=v.size();
        int ans=0;
        int curr=INT_MIN;
        vector<int> p;
        unordered_set<int> s;
        for(auto x:v)
        {
            s.insert(x);
        }
        for(auto x:s)
        {
            p.push_back(x);
        }
        sort(p.begin(),p.end());
        n=p.size();
        for(int i=0 ; i<n ; i++)
        {
            if(i==0)
            {
                l=p[i];
                ans=1;
            }
            else
            {
                if(p[i]==l+1)
                {
                    l=p[i];
                    ans++;
                }
                else
                {
                    curr=max(curr,ans);
                    l=p[i];
                    ans=1;
                }
            }
        }
        curr=max(curr,ans);
        return curr;
        
    }
};