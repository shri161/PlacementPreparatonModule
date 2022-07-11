// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
int dp[101][101];
class Solution{
    int solve(int i,int j,int a[])
    {  if(i==j)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        int mn=INT_MAX;
        for(int k=i;k<j;k++)
        {
            int steps=solve(i,k,a)+solve(k+1,j,a)+a[i-1]*a[k]*a[j];
            mn=min(mn,steps);
        }
        return dp[i][j] =mn;
    }
public:
    int matrixMultiplication(int N, int arr[])
    {   memset(dp,-1,sizeof(dp));
        return solve(1,N-1,arr);
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends