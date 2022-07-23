class Solution {
    int bfs(vector<vector<int>>&grid,int n,int m,queue<pair<int,int>>&q)
    { int c=0;
        while(!q.empty())
        {  int size=q.size();
           c++;
           while(size--)
           { int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(x+1<n&&grid[x+1][y]==1)
            {
            grid[x+1][y]=2;
            q.push({x+1,y})   ; 
           }
            if(x-1>=0&&grid[x-1][y]==1)
           {
            q.push({x-1,y});
            grid[x-1][y]=2;
           }
           if((y+1)<m&&grid[x][y+1]==1)
          {    q.push({x,y+1});
             grid[x][y+1]=2;
           }
           if((y-1)>=0&&grid[x][y-1]==1)
           {
             q.push({x,y-1});
             grid[x][y-1]=2;
            }
        }
        }
     if(c==0)
         return 0;
     return c-1;
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++)
        {
           for(int j=0;j<grid[0].size();j++)
               if(grid[i][j]==2)
                   q.push({i,j});
        }
       int x= bfs(grid,grid.size(),grid[0].size(),q);
        for(int i=0;i<grid.size();i++)
        {
           for(int j=0;j<grid[0].size();j++)
               if(grid[i][j]==1)
                   return -1;
        
        }
        return x;
    }
};