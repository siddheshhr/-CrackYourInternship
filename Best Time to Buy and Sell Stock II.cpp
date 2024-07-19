class Solution {
public:
    int solve(vector<int>& prices,vector<vector<int>>& dp,int i,int& n,int buy){
         if(i>=n)return 0;
        if(dp[i][buy]!=-1)return dp[i][buy];
        int profit=0;
        if(buy){
         profit=max(-prices[i]+solve(prices,dp,i+1,n,0),0+solve(prices,dp,i+1,n,1));
        }else{
          profit=dp[i][buy]=max(prices[i]+solve(prices,dp,i+1,n,1),0+solve(prices,dp,i+1,n,0));
        }
        return dp[i][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        return solve(prices,dp,0,n,1);
    }
};
