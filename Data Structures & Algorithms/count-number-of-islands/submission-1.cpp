class Solution {
public:
    
using state = pair<int,int> ;

int dx[4] = {1,0,-1,0} ;
int dy[4] = {0,1,0,-1} ;

    int boundarycondition(int i , int j , vector<vector<char>>& grid){

        if(i<0 || j<0 || i>=grid.size()||j>=grid[0].size()) return 0 ;
        else return 1 ;
    }

     vector <state> valid_neighbours(int i , int j ,  vector<vector<bool>> &visited , vector<vector<char>>& grid){
        vector <state> result ;
        for(int var = 0 ; var < 4  ; var++){
            int nx = i+dx[var] ;
            int ny = j+dy[var] ;

            if( boundarycondition(nx,ny,grid)&& grid[nx][ny] == '1'){
                result.push_back({nx,ny}) ;
            }
        }
        return result ;
    }


    void dfs(int i , int j ,  vector<vector<bool>> &visited , vector<vector<char>>& grid){
        visited[i][j] = true ;
         
        for(state x : valid_neighbours(i,j,visited,grid)){
            if(!visited[x.first][x.second] && grid[x.first][x.second] == '1'){
                dfs(x.first,x.second,visited,grid) ;
            }
        }
    }


  int numIslands(vector<vector<char>>& grid) {
    
    vector<vector<bool>> visited (grid.size() , vector <bool> (grid[0].size() , 0)) ;
    int component = 0;
    for(int i = 0 ; i < grid.size() ; i++){
        for(int j = 0 ; j < grid[0].size() ; j++){
            if(!visited[i][j] && grid[i][j] == '1'){
                dfs(i,j,visited,grid) ;
                component++ ;
            }
        }
    }

    return component ;
    }
};
