class Solution {
public:

    void dfs(int i , int j , vector<vector<bool>>& visited , vector<vector<char>>& board){

    if(i< 0 || j < 0 || i >=board.size() || j>=board[0].size()) return  ;

    if(visited[i][j] || board[i][j] == 'X') return ;

    visited[i][j] = 1 ;

    dfs(i+1,j,visited,board);
    dfs(i,j+1,visited,board) ;
    dfs(i,j-1,visited,board) ;
    dfs(i-1,j,visited,board) ;

    }

    void solve(vector<vector<char>>& board) {
        int m = board.size() ;
        int n = board[0].size() ;
    vector<vector<bool>> visited (m , vector<bool> (n,0)) ;
    for(int i = 0 ; i < m ;i++){
        if( i== 0 || i == m-1 ){
            for(int j = 0 ; j < n ; j++){
                if(!visited[i][j] && board[i][j] == 'O'){
                    dfs(i,j,visited , board) ;
                }
            }
        }

        if(!visited[i][0] && board[i][0] == 'O'){
                    dfs(i,0,visited , board) ;
                }

        if(!visited[i][n-1] && board[i][n-1] == 'O'){
                    dfs(i,n-1,visited , board) ;
                }
    }


    for(int i = 0 ; i < m ; i++){
        for (int j = 0; j < n ; j++){
            if(board[i][j] == 'O' && !visited[i][j]){
                board[i][j] = 'X' ;
            }
        }
    }

    }
};
