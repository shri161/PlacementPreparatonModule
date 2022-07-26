class Solution {
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        return a[0]<b[0];
    }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);    
        vector<vector<int>>ans;
        vector<int>x;
        x.push_back(intervals[0][0]);
       x.push_back( intervals[0][1]);
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=x[1])
            {
                x[1]=max(x[1],intervals[i][1]);
            }
            else
            {
                ans.push_back(x);
                x[0]=intervals[i][0];
                x[1]=intervals[i][1];
            }
        }
        ans.push_back(x);
        return ans;
    }
};