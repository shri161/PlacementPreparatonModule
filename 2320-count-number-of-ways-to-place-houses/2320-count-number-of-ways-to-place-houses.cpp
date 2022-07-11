int dp[10001];
class Solution {
    int mod = 1e9+7;
    long long  solve(int n)
    {
        if(n==0)
            return 1;
        if(n==1)
            return 2;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=(solve(n-1)+solve(n-2))%mod;
    }
public:
    int countHousePlacements(int n) {
        memset(dp,-1,sizeof(dp));
        long long x=solve(n);
      return  (1LL*x*x)%mod;
    }
};