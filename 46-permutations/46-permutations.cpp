class Solution {
    void solve(vector<int>ip,vector<vector<int>>&ans,int x)
    {  if(x==ip.size())
    {
      ans.push_back(ip);
        return;
    }
     for(int i=x;i<ip.size();i++)
     {
         swap(ip[i],ip[x]);
         solve(ip,ans,x+1);
         swap(ip[i],ip[x]);
     }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        solve(nums,ans,0);
        return ans;
    }
};