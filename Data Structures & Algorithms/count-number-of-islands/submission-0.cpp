class Solution {
public:
void dfs(int i , int j ,
         vector<vector<int>>& visited,
         vector<vector<char>>& g ){

    int n = g.size();
    int m = g[0].size();

    if(i < 0 || j < 0 || i >= n || j >= m)
        return;

    if(visited[i][j] || g[i][j] == '0')
        return;

    visited[i][j] = 1;

    dfs(i+1,j,visited,g);
    dfs(i-1,j,visited,g);
    dfs(i,j+1,visited,g);
    dfs(i,j-1,visited,g);
}

    int numIslands(vector<vector<char>>& grid) {
        int components = 0;
    vector<vector<int>> visited ;
    visited.resize(grid.size()) ;

    for(int i = 0; i < grid.size(); i++) {
    visited[i].resize(grid[0].size());
          }


  for(int i = 0 ; i < grid.size() ; i++){
    for(int j= 0 ; j < grid[0].size() ; j++){
      if(grid[i][j] == '1'){
        if(!visited[i][j]){
          dfs(i,j,visited,grid) ;
          components++ ;
        }
      }
    }
  }

  return components ;
    }
};
