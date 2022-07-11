int dp[201][20001];
class Solution {
    bool solve(vector<int>&a,int x,int n)
    {  if(n==0&&x==0)
        return true;
        if(n==0)
            return false;
       if(x==0)
           return true;
        if(dp[n][x]!=-1)
            return dp[n][x];
        if(a[n-1]>x)
            return dp[n][x]= solve(a,x,n-1);
        return dp[n][x]=solve(a,x,n-1)||solve(a,x-a[n-1],n-1);
        
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        if(sum%2!=0)
            return false;
        memset(dp,-1,sizeof(dp));
        return solve(nums,sum/2,nums.size());
    }
};