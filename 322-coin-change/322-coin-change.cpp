int dp[13][10001];
class Solution {
    int solve(vector<int>&coin,int x,int n)
    {   if(x==0&&n==0)
        return 0;
        if(x==0)
            return 0;
       if(n==0)
           return INT_MAX-1;
        if(dp[n][x]!=-1)
            return dp[n][x];
        if(coin[n-1]>x)
            return dp[n][x]=solve(coin,x,n-1);
        return dp[n][x]= min(1+solve(coin,x-coin[n-1],n),solve(coin,x,n-1));
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
  int x= solve(coins,amount,coins.size());
        if(x==INT_MAX-1)
            return -1;
        return x;
    }
};