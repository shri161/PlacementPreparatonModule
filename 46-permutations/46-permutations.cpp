class Solution {
    void solve(vector<int>op,vector<int>ip,vector<vector<int>>&ans,unordered_map<int,int>h)
    {
        if(op.size()==ip.size())
        {ans.push_back(op);
        return ;
        }
        for(int i=0;i<ip.size();i++)
        {
            if(h[ip[i]]==0)
            {
                op.push_back(ip[i]);
                h[ip[i]]=1;
                solve(op,ip,ans,h);
                op.pop_back();
                h[ip[i]]=0;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>op;
        vector<vector<int>>ans;
        unordered_map<int,int>h;
        solve(op,nums,ans,h);
        return ans;
    }
};