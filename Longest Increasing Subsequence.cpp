class Solution {
public:
    int solve(vector<int>& nums,vector<vector<int>>& dp,int i,int prev_idx,int n){
        if(i>=n)return 0;
        if(dp[i][prev_idx+1]!=-1)return dp[i][prev_idx+1];
        //int len=0;
        int len=0+solve(nums,dp,i+1,prev_idx,n);
        if(prev_idx==-1||nums[i]>nums[prev_idx]){
            len=max(len,1+solve(nums,dp,i+1,i,n));
        }
        return dp[i][prev_idx+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(nums,dp,0,-1,n);
    }
};
