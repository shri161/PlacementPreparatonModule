class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>a=nums;
        sort(a.begin(),a.end());
        int l=-1,r=-1;
        for(int i=0;i<nums.size();i++)
        { 
           if(nums[i]!=a[i])
           { l=i;
            break;
           }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]!=a[i])
            {
                r=i;
                break;
            }
        }
        if(l==-1&&r==-1)
            return 0;
        return r-l+1;
    }
};