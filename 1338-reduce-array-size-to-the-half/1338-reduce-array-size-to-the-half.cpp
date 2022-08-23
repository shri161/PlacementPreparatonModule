class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>h;
        int n=arr.size();
        n=n/2;
        for(int i=0;i<arr.size();i++)
        {
            h[arr[i]]++;
        }
        priority_queue<pair<int,int>>q;
        for(int i=0;i<arr.size();i++)
        {
            if(h[arr[i]]>0)
            {
                q.push({h[arr[i]],arr[i]});
                h[arr[i]]=0;
            }
        }
        int x=arr.size();
        int c=0;
        while(!q.empty())
        {
              int a=q.top().first;
              int b=q.top().second;
              q.pop();
              x=x-a;
              c++;
              if(x<=n)
              break;    
        }
        return c;
    }
};