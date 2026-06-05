class Solution {
public:
    
int dfs(int i, int j,
         vector<vector<int>>& visited,
         vector<vector<int>>& g) {
    int count1 = 0 ;
    int count2 = 0 ;
    int count3 = 0 ;
    int count4 = 0 ;
    int n = g.size();
    int m = g[0].size();
    
    
        
    if (i < 0 || j < 0 || i >= n || j >= m)
        return 1;

    if ( g[i][j] == 0)
        return 1;
    if ( visited[i][j] )
        return 0;

    visited[i][j] = 1;

     count1 += dfs(i + 1, j, visited, g);
     count2 +=  dfs(i - 1, j, visited, g);
     count3 +=  dfs(i, j + 1, visited, g);
     count4 +=  dfs(i, j - 1, visited, g);
    return (count1+count2+count3+count4) ;
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