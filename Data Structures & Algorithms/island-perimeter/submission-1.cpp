class Solution {
public:
 int dfs(int i, int j,
         vector<vector<int>>& visited,
         vector<vector<int>>& g) {
    
    int n = g.size();
    int m = g[0].size();
    
    
        
    if (i < 0 || j < 0 || i >= n || j >= m)
        return 1;

    if ( g[i][j] == 0)
        return 1;
    if ( visited[i][j] )
        return 0;

    visited[i][j] = 1;

     return dfs(i + 1, j, visited, g)
     +dfs(i - 1, j, visited, g)
     +dfs(i, j + 1, visited, g)
     +dfs(i, j - 1, visited, g);
}


int islandPerimeter(vector<vector<int>>& grid) {
    if (grid.empty() || grid[0].empty())
        return 0;

    

    vector<vector<int>> visited(
        grid.size(),
        vector<int>(grid[0].size(), 0)
    );

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] && !visited[i][j]) {
               return dfs(i, j, visited, grid);
            }
        }
    }

    return 0 ;
}
};