class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double>q;
        sort(nums.begin(),nums.end());
        double c=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {  sum+=nums[i];
         q.push(nums[i]);
        }
       double x=(double)sum/2;
        while(!q.empty())
        { 
            double halve=(double)q.top()/2;
            q.pop();
            sum=sum-halve;
            q.push(halve);
            c++;
            if(sum<=x)
                break;
        }
        return c;
    }
};