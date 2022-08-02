class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i;
        int f=0;
        for(i=nums.size()-1;i>=1;i--)
        {
            if(nums[i]>nums[i-1])
            {   f=1;
                break;
            }
        }
        if(f==0)
        {  reverse(nums.begin(),nums.end());
         return;
        }
        int j;
        for( j=nums.size()-1;j>=i;j--)
        {
            if(nums[j]>nums[i-1])
                break;
        }
        swap(nums[i-1],nums[j]);
        reverse(nums.begin()+i,nums.end());
    }
};