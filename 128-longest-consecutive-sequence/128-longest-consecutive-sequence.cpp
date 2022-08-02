class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>h;
        int n=nums.size();
        for(int  i=0;i<nums.size();i++)
        {
            h[nums[i]]++;
        
        }
        int mx=0;
        for(int i=0;i<n;i++)
        {
            if(h[nums[i]-1]==0)
            {  int c=0;
              int x=nums[i];
             while(1)
             {  
                 if(h[x])
                 { c++; 
                  x++;
                 }
                 else
                     break;
             }
             mx=max(mx,c);
            }
        }
        return mx;
    }
};