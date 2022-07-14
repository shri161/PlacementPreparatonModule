class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V=numCourses;
        vector<int>adj[V];
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        vector<int>in(V,0);
	 for(int i=0;i<V;i++)
	 {
	     for(int j=0;j<adj[i].size();j++)
	     {
	         in[adj[i][j]]++;
	     }
	 }
	 queue<int>q;
	 for(int i=0;i<in.size();i++)
	 {
	     if(in[i]==0)
	     q.push(i);
	 }
	 vector<int>ans;
	 while(!q.empty())
	 { int x=q.front();
	   for(auto it:adj[x])
	   {
	       in[it]--;
	       if(in[it]==0)
	       q.push(it);
	   }
	     ans.push_back(x);
	     q.pop();
	 }
        if(ans.size()==V)
            return true;
        return false;
    }
};