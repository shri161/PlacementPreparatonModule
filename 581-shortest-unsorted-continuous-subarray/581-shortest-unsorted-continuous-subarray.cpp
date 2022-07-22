class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
            vector<int> sortedclone = nums;
	sort(sortedclone.begin() , sortedclone.end());
int start =-1;
int n = nums.size();	
for(int i=0;i<n;i++)
{
if(nums[i] != sortedclone[i])
{
start = i;
break;
}
}
if(start ==-1)
{
return 0;
}
int end = n-1;
for(int i=n-1;i>=0;i--)
{
if(nums[i] != sortedclone[i])
{
end = i;
break;
}
}
return end - start +1;
    }

};