// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{ void dfs(stack<int>&s,vector<int>&vis,int x,vector<int>adj[])
{
    vis[x]=1;
    for(auto it:adj[x])
    {
        if(vis[it]==0)
        dfs(s,vis,it,adj);
    }
    s.push(x);
}
void dfs1(vector<int>&v,int x,vector<int>a[])
{
    v[x]=1;
    for(auto it:a[x])
    {
        if(v[it]==0)
        dfs1(v,it,a);
    }
}
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        stack<int>s;
        vector<int>vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            dfs(s,vis,i,adj);
        }
        vector<int>a[V];
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<adj[i].size();j++)
            {
                a[adj[i][j]].push_back(i);
            }
        }
        vector<int>v(V,0);
        int c=0;
        while(!s.empty())
        {
            int x=s.top();
            s.pop();
            if(v[x]==0)
            { c++;
            dfs1(v,x,a);
            }
        }
        return c;
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends