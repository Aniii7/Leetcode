class Solution {
public:
vector<vector<int>>directions={{1,0},{-1,0},{0,1},{0,-1}};
int dfs(int r,int c,vector<vector<int>>& grid)
{
    
    if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size() || grid[r][c]!=1)
    return 0 ;
    grid[r][c]=2;
    int count =1;
    
   for(auto direction:directions)
   {
       int newr=r+direction[0];
       int newc=c+direction[1];
        count+= dfs(newr,newc,grid);
   }
   return count;
   

}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int m=0;
        int cc=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
            if(grid[i][j]==1)
            {
                
            int count =dfs(i,j,grid);
                m=max(m,count);
                
            }
           
        }
        
        }
        return m;
    }
};
