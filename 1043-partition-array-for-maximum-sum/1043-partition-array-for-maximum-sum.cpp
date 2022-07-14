class Solution {
public:
    int recur(vector<int>& arr, int k,int ind,vector<int>&dp)
    {
        if(ind==arr.size())return 0;
        if(dp[ind]!=-1)return dp[ind];
        int len=0;
        int maxi=INT_MIN;
        int ans=INT_MIN;
        int n=arr.size();
        for(int i=ind;i<min(n,(ind+k));i++)
        {
            len++;
            maxi=max(maxi,arr[i]);
            int cost=len*maxi+recur(arr,k,i+1,dp);
            ans=max(ans,cost);
        }
        return dp[ind]=ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
     
        vector<int>dp(arr.size()+1,-1);
        return recur(arr,k,0,dp);
        
    }
};