class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0;
        int n=nums.size();
        int end=nums.size()-1;
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==mid)
            {
                start=mid+1;
            }
            else if(nums[mid]>mid)
            {
                end=mid-1;
                res=mid;
            }
        }
        if(res==-1)
            return n;
        return res;
    }
};