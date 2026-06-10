class Solution {
public:
using state = pair<int,int> ;
#define INF 2147483647 
int dx[4] = {-1,0,1,0} ;
int dy[4] = {0,1,0,-1} ;

bool boundary_condition(int i , int j , vector<vector<int>>& grid){
    if(i<0|| j<0||i>=grid.size()||j>=grid[0].size()) return 0 ;
    else return 1 ;
}


vector <state> valid_neighbours(int i , int j , vector<vector<int>>& grid){
    vector <state> result ;

    for(int val = 0 ; val < 4 ; val++) {
        int nx = i + dx[val] ;
        int ny = j + dy[val] ;

// here condition will be for INF , not -1 ,. because neigbour tho 0 bhi ho skta h na nd we don't want that neighbour
        if(boundary_condition(nx,ny,grid) && grid[nx][ny] == INF ){
            result.push_back(make_pair(nx,ny)) ;
        }


        }


    return result ;
}


    void bfs( vector<vector<int>>& visited , vector<vector<int>>& grid ,  queue <state> & q ){

        while(!q.empty()){
            state curr = q.front();
            q.pop() ;

            if(visited[curr.first][curr.second]) continue ;
            
           visited[curr.first][curr.second] = 1 ;

            for(state x : valid_neighbours(curr.first,curr.second ,grid)){
                if(!visited[x.first][x.second] &&  grid[x.first][x.second] > grid[curr.first][curr.second] + 1){
                    grid[x.first][x.second] = grid[curr.first][curr.second] + 1 ;
                    q.push(x) ;
                }
            }

        }
        
    }

    void islandsAndTreasure(vector<vector<int>>& grid) {
        vector<vector<int>> visited (grid.size(),vector <int> (grid[0].size() , 0)) ;
        queue <state> q ;

        for(int i = 0 ;i < grid.size() ; i++)
        {
            for(int j = 0 ; j < grid[0].size() ; j++){
                if( grid[i][j]== 0) {
                    q.push({i,j}) ;
                 }
            }
        }
        bfs(visited,grid,q) ;
    }
};
