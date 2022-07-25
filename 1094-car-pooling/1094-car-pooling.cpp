class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int a[1001]={0};
        for(int i=0;i<trips.size();i++)
        {
            a[trips[i][1]]+=trips[i][0];
            a[trips[i][2]]-=trips[i][0];
        }
        if(a[0]>capacity)
            return false;
        for(int i=1;i<1001;i++)
        {   a[i]+=a[i-1];
            if(a[i]>capacity)
                return false;
        }
        return true;
    }
};