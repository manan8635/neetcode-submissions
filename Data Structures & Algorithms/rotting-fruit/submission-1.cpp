class Solution {
public:
   
using state = pair <int,int> ;
using tpl = pair < state , int > ;

int dx[4] = {-1,0,1,0} ;
int dy[4] = {0,1,0,-1} ;

bool boundary(int i , int j ,  vector<vector<int>>& grid){
if(i <0 || j < 0 || i >= grid.size() || j >= grid[0].size()) return 0 ;
else return 1;
}

vector <state> valid_neighbours(int i , int j , vector<vector<bool>>& visited , vector<vector<int>>& grid){

    vector <state>result ;

    for(int k =0  ;k<4 ;k++){
        int nx = i+dx[k] ;
        int ny = j+dy[k] ;


        if(boundary(nx,ny,grid) && grid[nx][ny] == 1 && !visited[nx][ny]  ){
            result.push_back(make_pair(nx,ny)) ;
        }
    }
    return result ;
}



    int bfs( queue <tpl> q ,vector<vector<bool>>& visited , vector<vector<int>>& grid) { 
        int timer  = 0 ;
        while(!q.empty()){
            tpl t = q.front() ; q.pop() ;
            int i = (t.first).first ;
            int j = (t.first).second ;
            int k = t.second ;
            timer = max(timer , k ) ;
            
            for(auto x : valid_neighbours(i,j,visited,grid)){
                    visited[x.first][x.second] = true;
                    q.push({{x.first,x.second},k+1}) ;
            }
            
        }
        return timer ;
    }


    int orangesRotting(vector<vector<int>>& grid) {
        queue <tpl> q ;
        vector<vector<bool>> visited (grid.size() , vector<bool>(grid[0].size(),0)) ;
        for(int i = 0 ; i<grid.size() ;i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 2 ) {
                    q.push({{i,j},0}) ;
                      visited[i][j] = true; 
                }
            }
        }


      int timer = bfs(q,visited,grid) ;

        for(int i = 0 ; i<grid.size() ;i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 1 && !visited[i][j] ) {
                    return -1 ;
                }
            }
        }

        return timer ;

    }

};
