class Solution {
public:
    int maxProfit(vector<int>& p) {
         int l=-1;
        int ans=0;
        int n=p.size();
        vector<int> v;
        for(int i=0 ; i<n ; i++)
        {
            if(l==-1)
            {
                l=p[i];
            }
            else
            {
                if(p[i]<=l)
                {
                    l=p[i];
                }
                else
                {
                    v.push_back(p[i]-l);
                }
            }
        }
        if(v.size()!=0)
        {
            return *max_element(v.begin(),v.end());
        }
        else
        {
            return 0;
        }
        
    }
};