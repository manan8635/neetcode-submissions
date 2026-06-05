class Solution {
public:
int dfs(int i , int j ,
         vector<vector<int>>& visited,
         vector<vector<int>>& g ){


    int n = g.size();
    int m = g[0].size();

    if(i < 0 || j < 0 || i >= n || j >= m)
        return 0;

    if(visited[i][j] || g[i][j] == 0)
        return 0;

      int count = 1 ;  
    visited[i][j] = 1;

   return count + dfs(i+1,j,visited,g)+
    dfs(i-1,j,visited,g)+
    dfs(i,j+1,visited,g)+
    dfs(i,j-1,visited,g);
}

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int components = 0;
    vector<vector<int>> visited ;
    visited.resize(grid.size()) ;

    for(int i = 0; i < grid.size(); i++) {
    visited[i].resize(grid[0].size());
          }

          int res = 0 ;
  for(int i = 0 ; i < grid.size() ; i++){
    for(int j= 0 ; j < grid[0].size() ; j++){
      if(grid[i][j] == 1){
        if(!visited[i][j]){
          int count = dfs(i,j,visited,grid) ;
          res = max(res,count) ;
        }
      }
    }
  }

  return res ;
    }
};
