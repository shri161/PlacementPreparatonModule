class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>q;
        vector<int>ans;
        for(int i=arr.size()-1;i>=0;i--)
        {
            q.push({abs(x-arr[i]),arr[i]});
        }
        int n=arr.size();
        k=n-k;
        while(k--)
        {
            q.pop();
        }
        while(!q.empty())
        {
        ans.push_back(q.top().second);
            q.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};