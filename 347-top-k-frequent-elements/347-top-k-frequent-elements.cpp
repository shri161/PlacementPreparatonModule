class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>q;
        unordered_map<int,int>h;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            h[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(h[nums[i]])
            { q.push({h[nums[i]],nums[i]});
            h[nums[i]]=0;
            }
        }
        while(k--)
        { ans.push_back(q.top().second);
          q.pop();
        }
        return ans;
    }
};