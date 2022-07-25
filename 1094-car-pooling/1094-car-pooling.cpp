class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
       int a[1001]={0};
        for(int i=0;i<trips.size();i++)
        {
            
          for(int j=trips[i][1];j<trips[i][2];j++)
          { a[j]+=trips[i][0];
           if(a[j]>capacity)
               return false;
          }
        }
        return true;
    }
};