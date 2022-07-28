class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        sort(v.begin(),v.end());
        set<vector<int>> s;
        int n=v.size();
        for(int i=0 ; i<n ; i++)
        {
            int p=v[i];
            p=p*-1;
            int l=i+1;
            int h=n-1;
            while(l<h)
            {
                if(v[l]+v[h]==p)
                {
                    s.insert({v[i],v[l],v[h]});
                    l++;
                    h--;
                    
                }
                else if(v[l]+v[h]>p)
                {
                    h--;
                }
                else
                {
                    l++;
                }
            }
        }
        vector<vector<int>> f;
        for(auto x:s)
        {
            f.push_back(x);
        }
        return f;
        
    }
};