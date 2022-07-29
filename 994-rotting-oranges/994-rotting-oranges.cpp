class Solution {
public:
    int orangesRotting(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        set<pair<int,int>> s;
        set<pair<int,int>> s1;
        queue<vector<int>> q;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<m ; j++)
            {
                if(v[i][j]==2)
                {
                    q.push({i,j,0});
                    // s.insert({i,j});
                    // s1.insert({i,j});
                }
                else if(v[i][j]==1)
                {
                    // s1.insert({i,j});
                }
            }
        }
        int ans=0;
        while(q.empty()==false)
        {
            vector<int> p=q.front();
            q.pop();
            int l=p[2];
            ans=max(ans,l);
            int l1=p[0];
            int l2=p[1];
            if(l1-1>=0&&v[l1-1][l2]==1)
            {
                v[l1-1][l2]=2;
                q.push({l1-1,l2,l+1});
            }
             if(l1+1<n&&v[l1+1][l2]==1)
            {
                v[l1+1][l2]=2;
                q.push({l1+1,l2,l+1});
            }
             if(l2-1>=0&&v[l1][l2-1]==1)
            {
                v[l1][l2-1]=2;
                q.push({l1,l2-1,l+1});
            } 
            if(l2+1<m&&v[l1][l2+1]==1)
            {
                v[l1][l2+1]=2;
                q.push({l1,l2+1,l+1});
            }
        }
        for(auto x:v)
        {
            for(auto y:x)
            {
                if(y==1)
                {
                    return -1;
                }
            }
        }
        return ans;
        
    }
};