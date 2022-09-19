int dp[1001][1001];
class Solution {
    int solve(string &s,int start,int end)
    {
           if(start>end)
               return 0;
           if(start==end)
               return 1;
          if(dp[start][end]!=-1)
              return dp[start][end];
           if(s[start]==s[end])
               return dp[start][end]=max(2+solve(s,start+1,end-1),max(solve(s,start,end-1),solve(s,start+1,end)));
          else
              return dp[start][end]=max(solve(s,start+1,end),solve(s,start,end-1));
    }
public:
    int longestPalindromeSubseq(string s) {
        memset(dp,-1,sizeof(dp));
        return solve(s,0,s.size()-1);
    }
};