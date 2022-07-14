class Solution {
    int ans=0;
    
    void recur(vector<vector<int>>& grid, int i, int j, vector<vector<int>> vis)
    {        
        if(grid[i][j]==2)
        {
            for(auto a : vis)
            {
                for(auto i : a)
                {
                    if(i==0)
                    {
                        return;
                    }
                }
            }
            ans++;
            return;
        }
        vector<vector<int>> p1=vis;
        vector<vector<int>> p2=vis;
        vector<vector<int>> p3=vis;
        vector<vector<int>> p4=vis;
        int n=grid.size(), m=grid[0].size();
        if(i+1<n && grid[i+1][j]!=-1 && !vis[i+1][j])
        {
            
            p1[i+1][j]=1;
            recur(grid, i+1, j, p1);
            
        }
        if(i-1>=0 && grid[i-1][j]!=-1 && !vis[i-1][j])
        {
            p2[i-1][j]=1;
            recur(grid, i-1, j, p2);
            
        }
        if(j+1<m && grid[i][j+1]!=-1 && !vis[i][j+1])
        {
            p3[i][j+1]=1;
            recur(grid, i, j+1, p3);
            
        }
        if(j-1>=0 && grid[i][j-1]!=-1 && !vis[i][j-1])
        {
            p4[i][j-1]=1;
            recur(grid, i, j-1, p4);
          
        }
    }
    
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int x=0, y=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==-1)
                {
                    vis[i][j]=-1;
                }
                if(grid[i][j]==1)
                {
                    x=i, y=j;
                }
            }
        }
        vis[x][y]=1;
        recur(grid, x, y, vis);
        return ans;
    }
};