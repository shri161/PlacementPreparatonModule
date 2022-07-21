class Solution {
    void solve(string ip,string op,unordered_map<string,int>&h,vector<string>&ans,int x)
    {  if(x==ip.size()-1)
    {  op.pop_back();
        ans.push_back(op);
        return ;
    }
        string s="";
      for(int i=x+1;i<ip.size();i++)
      { s+=ip[i];
        if(h[s]!=0)
        {
            string a=op;
            a+=s;
            a+=' ';
            solve(ip,a,h,ans,i);
        }     
      }
    }
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        string op;
        vector<string>ans;
        unordered_map<string,int>h;
        for(int i=0;i<wordDict.size();i++)
            h[wordDict[i]]++;
        solve(s,op,h,ans,-1);
        return ans;
    }
};