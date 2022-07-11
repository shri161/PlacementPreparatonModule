bool ispali(string &s,int l,int r)
{ while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
        
      }
      return true;
  
}
int dp[2001][2001];
class Solution {
    int solve(string &s,int i,int j)
    {  if(i==j)
        return 0;
      if( ispali(s,i,j))
          return 0;
     if(dp[i][j]!=-1)
         return dp[i][j];
        int mn=INT_MAX;
        for(int k=i;k<j;k++)
        {   if(ispali(s,i,k))
            mn=min(mn,solve(s,k+1,j)+1);
        }
     return dp[i][j]=mn;
    }
public:
    int minCut(string s) {
        memset(dp,-1,sizeof(dp));
        return solve(s,0,s.size()-1);
    }
};