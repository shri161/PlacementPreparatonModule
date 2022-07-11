int dp[301][301];
class Solution {
    bool solve(string &s,unordered_map<string,int>&h,int start,int end)
    {  if(start>end)
        return true;
        string a="";
       bool ans=false;
      if(dp[start][end]!=-1)
          return dp[start][end];
        for(int i=start;i<=end;i++)
        { a+=s[i];
           if(h[a]!=0)
           ans=ans|| solve(s,h,i+1,end);  
        }
     return dp[start][end]=ans;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,int>h;
        for(int i=0;i<wordDict.size();i++)
        { h[wordDict[i]]++;
        }
        memset(dp,-1,sizeof(dp));
        return solve(s,h,0,s.size()-1);
    }
};