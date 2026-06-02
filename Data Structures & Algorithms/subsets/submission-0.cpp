class Solution {
    vector <vector <int> > vec ;
public:
    
void print(vector <int> arr , int n){

    if(n == -1){
        vec.push_back({}) ;
        return  ;
    }
    

    print(arr,n-1) ; 
    int x= vec.size() ;
    for(int i = 0 ; i < x ; i++){
        vec.push_back(vec[i]) ;
        vec[i].push_back(arr[n]) ;
        
    } 
    return  ;
}


    vector<vector<int>> subsets(vector<int>& nums) {
            print(nums,nums.size()-1);
            return vec ;
    }
    
};
