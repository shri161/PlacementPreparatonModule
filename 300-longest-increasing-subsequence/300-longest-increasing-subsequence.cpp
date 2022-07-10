class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        for(int i=0;i<n;i++)
            dp[i]=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                    dp[i]=max(dp[i],dp[j]+1);
            }
        }
        int mx=0;
        for(int i=0;i<n;i++)
            if(mx<dp[i])
                mx=dp[i];
        return mx;
    }
};