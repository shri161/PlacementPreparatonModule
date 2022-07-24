class Solution {
    void bfs(vector<vector<char>>&grid,int i,int j,int n,int m)
    {   
        queue<pair<int,int>>q;
        q.push({i,j});
        grid[i][j]=0;
        while(!q.empty())
        { 
          int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(x+1<n&&grid[x+1][y]=='1')
            {
                q.push({x+1,y});
                grid[x+1][y]='0';
            }
            if((x-1)>=0&&grid[x-1][y]=='1')
            {
                q.push({x-1,y});
                grid[x-1][y]='0';
            }
            if((y+1)<m&&grid[x][y+1]=='1')
            {
               q.push({x,y+1});
                grid[x][y+1]='0';
            }
            if((y-1)>=0&&grid[x][y-1]=='1')
            {  q.push({x,y-1});
               grid[x][y-1]='0';
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int c=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {c++;
                    bfs(grid,i,j,grid.size(),grid[0].size());
                }
            }
        }
        return c;
    }
};