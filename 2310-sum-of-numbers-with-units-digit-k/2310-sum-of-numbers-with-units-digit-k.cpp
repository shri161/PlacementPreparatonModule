int dp[3001][3001];
class Solution {
    
    int solve(int x,vector<int>&a,int n)
    {
        if(x==0&&n==0)
            return 0;
        if(x==0)
            return 0;
        if(n==0)
            return INT_MAX-1;
        if(dp[n][x]!=-1)
            return dp[n][x];
        if(a[n-1]>x)
            return dp[n][x]=solve(x,a,n-1);
        return dp[n][x]=min(1+solve(x-a[n-1],a,n),solve(x,a,n-1));
    }
public:
    int minimumNumbers(int num, int k) {
        vector<int>a;
        memset(dp,-1,sizeof(dp));
        for(int i=k;i<=num;i++)
        {
            if(i%10==k&&i!=0)
                a.push_back(i);
        }
        for(int i=0;i<a.size();i++)
            cout<<a[i]<<" ";
        int x= solve(num,a,a.size());
        if(x==INT_MAX-1)
            return -1;
        return x;
            
    }
};