class Solution {
public:
    bool static sbs(const pair<int,int> a,const pair<int,int> &b)
    {
        return a.second<b.second;
    }
    int maximumWhiteTiles(vector<vector<int>>& v, int k) {
        vector<int> v1,v2;
        int n=v.size();
        // sort(v.begin(),v.end());
        vector<pair<int,int>> f;
        for(int i=0 ; i<n ; i++)
        {
            // v1.push_back(v[i][1]);
            f.push_back({v[i][0],v[i][1]});
        }
        sort(f.begin(),f.end(),sbs);
        for(auto x:f)
        {
            v1.push_back(x.second);
        }
        vector<int>  f1,f2;
        int p=0;
        for(int i=0 ; i<n ; i++)
        {
            p+=f[i].second-f[i].first+1;
            f1.push_back(p);
        }
        p=0;
        for(int i=n-1 ; i>=0 ; i--)
        {
            p+=f[i].second-f[i].first+1;
            f2.push_back(p);
        }
        reverse(f2.begin(),f2.end());
        int ans=INT_MIN;
        // for(auto x:v1)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // for(auto x:f)
        // {
        //     cout<<x.first<<"-"<<x.second<<" ";
        // }
        // cout<<endl;
        for(int i=0 ; i<n ; i++)
        {
            auto x=upper_bound(v1.begin(),v1.end(),k+f[i].first-1);
            if(x==v1.end())
            {
                int curr=f1[n-1];
                if(i-1>=0)
                {
                    curr-=f1[i-1];
                }
                // cout<<"xx"<<endl;
                // cout<<curr<<endl;
                ans=max(ans,curr);
            }
            else
            {
                int p1=x-v1.begin();
                // p1--;
                // cout<<p1<<"-----"<<endl;
                
                
                    int curr=0;
                    if(p1-1>=0)
                    {
                        curr+=f1[p1-1];
                    }
                    if(i-1>=0)
                    {
                        curr-=f1[i-1];
                    }
                    if(f[p1].first<=k+f[i].first-1)
                    {
                        curr+=min(k+f[i].first-1,f[p1].second)-f[p1].first+1;
                    }
                    ans=max(ans,curr);
                // cout<<curr<<endl;
                
            }
            // cout<<ans<<endl;
            
        }
        
        return ans;
        
    }
};