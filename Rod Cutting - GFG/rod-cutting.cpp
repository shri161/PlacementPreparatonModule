// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++
int dp[1001][1001];
class Solution{
int solve(int p[],vector<int>&c,int n,int x)
{  if(n==0||x==0)
    return 0;
    if(dp[n][x]!=-1)
    return dp[n][x];
    if(c[n-1]>x)
        return dp[n][x]=solve(p,c,n-1,x);
    return dp[n][x]=max(p[n-1]+solve(p,c,n,x-c[n-1]),solve(p,c,n-1,x));
}
  public:
    int cutRod(int price[], int n) {
        //code here
        vector<int>a;
        memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++)
    a.push_back(i);
 return solve(price,a,n,n);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends