class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        set<vector<int>> f;
        int n=v.size();
        for(int i=0 ; i<n ; i++)
        {
            long long curr=k-v[i];
            for(int j=i+1 ; j<n ; j++)
            {
                long long temp=curr-v[j];
                int l=j+1;
                int h=n-1;
                while(l<h)
                {
                    if(v[l]+v[h]==temp)
                    {
                        f.insert({v[i],v[j],v[l],v[h]});
                        // break;
                        l++;
                        h--;
                    }
                    else if(v[l]+v[h]<temp)
                    {
                        l++;
                    }
                    else
                    {
                        h--;
                    }
                }
            }
        }
        vector<vector<int>> g;
        for(auto x:f)
        {
            g.push_back(x);
        }
        return g;
        
    }
};