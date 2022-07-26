class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int gap=ceil((n+m)/2);
        for(int i=0;i<n;i++)
            nums1[i+m]=nums2[i];
        while(gap>=1)
        { 
            int i=0,j=gap;
            while(i<nums1.size()&&j<nums1.size())
            { 
                if(nums1[i]>nums1[j])
                    swap(nums1[i],nums1[j]);
                i++;
                j++;
            } 
            if(gap==1)
                break;
             gap=gap%2?gap/2+1:gap/2;
        }
    }
};