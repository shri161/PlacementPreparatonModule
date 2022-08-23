class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        priority_queue<pair<int,int>>q;
        unordered_map<char,int>h;
        for(int i=0;i<s.size();i++)
            h[s[i]]++;
        for(int i=0;i<s.size();i++)
        {
            q.push({h[s[i]],s[i]});
        }
        while(!q.empty())
        {  int a=q.top().first;
           char b=q.top().second;
           q.pop();
          ans+=b;
        }
        return ans;
    }
};