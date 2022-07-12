int dp[201][201];
class Solution {
    int solve(vector<vector<int>> &a,int i,int j,int x,int y)
    {    if(i>=x||j>=y)
        return INT_MAX-1;
      if(i==(x-1)&&j==(y-1))
          return a[i][j];
      if(dp[i][j]!=-1)
          return dp[i][j];
        int c=solve(a,i,j+1,x,y);
        int d=solve(a,i+1,j,x,y);
        return dp[i][j]=min(c,d)+a[i][j];  
        
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return solve(grid,0,0,grid.size(),grid[0].size());              
                    
    }
};