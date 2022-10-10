class Solution {
public:
    
    int mod = 1e9 + 7;
    int solve(vector<vector<vector<int>>>& dp,vector<vector<int>>& grid, int i,int j,int k,int sum)
    {
        if(i < 0 || j < 0 || i > grid.size()-1 || j > grid[0].size()-1)
            return 0;
        
        if(i==grid.size()-1 && j == grid[0].size()-1)
        {
            sum+=grid[i][j];
            if(sum%k==0)return 1;
            return 0;
        }
        
        if(dp[i][j][sum%k]!=-1)return dp[i][j][sum%k];
        
        long down = solve(dp,grid,i+1,j,k,sum+grid[i][j]);
        long right = solve(dp,grid,i,j+1,k,sum+grid[i][j]);
        
        return dp[i][j][sum%k]=(down%mod + right%mod)%mod;
    }
    
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        
        vector<vector<vector<int>>> dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(51,-1)));
        return solve(dp,grid,0,0,k,0);
    }
};