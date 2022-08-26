class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)
            return nums.size();
        int i=1;
        int x;
        if(nums[0]==nums[1])
         x=2;
          else
            x=1;
        int j=2;
        while(j<nums.size())
        {
           if(nums[i]==nums[j])
               x++;
            else
                x=1;
            if(x<=2)
            {
                i++;
                nums[i]=nums[j];
            }
            j++;
        }
        return i+1;
    }
};