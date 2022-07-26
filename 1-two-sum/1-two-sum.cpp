class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>h;
        vector<int>a;
        for(int i=0;i<nums.size();i++)
        {
            if(h.find(target-nums[i])!=h.end())
            {
                a.push_back(h[target-nums[i]]);
                a.push_back(i);
                break;
            }
            else
            {
                h[nums[i]]=i;
            }
        }
        return a;
    }
};