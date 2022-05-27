class Solution {
public:
    int maxOperations(vector<int>& v, int k) {
        map<int,int> m;
        for(auto x:v)
        {
            m[x]++;
        }
        int n=v.size();
        int ans=0;
        for(int i=0 ; i<n ; i++)
        {
            if(m.find(v[i])!=m.end())
            {
                int l=k-v[i];
                if(m.find(l)!=m.end())
                {
                    if(l==v[i])
                    {
                        if(m[l]>=2)
                        {
                            m[l]-=2;
                            ans++;
                            if(m[l]==0)
                            {
                                m.erase(l);
                            }
                        }
                    }
                    else
                    {
                        ans++;
                        // cout<<i<<" ";
                        m[l]--;
                        m[v[i]]--;
                        if(m[l]==0)
                        {
                            m.erase(l);
                        }
                        if(m[v[i]]==0)
                        {
                            m.erase(v[i]);
                        }
                    }
                    
                }
            }
        }
        // cout<<endl;
        return ans;
        
    }
};