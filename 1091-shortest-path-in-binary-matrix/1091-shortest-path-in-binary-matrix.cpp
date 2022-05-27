class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        if(v[0][0]==1)
        {
            return -1;
        }
        int ans=INT_MAX;
        queue<vector<int>> q;
        q.push({0,0,1});
        set<pair<int,int>> s;
        s.insert({0,0});
        while(q.empty()==false)
        {
            auto x=q.front();
            q.pop();
            int l=x[0];
            int h=x[1];
            
            int k=x[2];
            if(l==n-1&&h==m-1)
            {
                ans=min(ans,k);
            }
            if(l+1<n&&h+1<m&&v[l+1][h+1]==0&&s.find({l+1,h+1})==s.end())
            {
                q.push({l+1,h+1,k+1});
                s.insert({l+1,h+1});
            }
            if(h+1<m&&v[l][h+1]==0&&s.find({l,h+1})==s.end())
            {
                q.push({l,h+1,k+1});
                s.insert({l,h+1});
            }
            if(l+1<n&&v[l+1][h]==0&&s.find({l+1,h})==s.end())
            {
                q.push({l+1,h,k+1});
                s.insert({l+1,h});
            }
            if(l-1>=0&&h+1<m&&v[l-1][h+1]==0&&s.find({l-1,h+1})==s.end())
            {
                q.push({l-1,h+1,k+1});
                s.insert({l-1,h+1});
            }
            if(l+1<n&&h-1>=0&&v[l+1][h-1]==0&&s.find({l+1,h-1})==s.end())
            {
                q.push({l+1,h-1,k+1});
                s.insert({l+1,h-1});
            }
            if(l-1>=0&&v[l-1][h]==0&&s.find({l-1,h})==s.end())
            {
                q.push({l-1,h,k+1});
                s.insert({l-1,h});
            }
            if(l-1>=0&&h-1>=0&&v[l-1][h-1]==0&&s.find({l-1,h-1})==s.end())
            {
                q.push({l-1,h-1,k+1});
                s.insert({l-1,h-1});
            }
            if(h-1>=0&&v[l][h-1]==0&&s.find({l,h-1})==s.end())
            {
                q.push({l,h-1,k+1});
                s.insert({l,h-1});
            }
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
        
    }
};