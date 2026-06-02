class Solution {
    vector <vector <int> > vec ;
public:

void print(vector <int> &arr , int n){

    if(n == -1){
        vec.push_back({}) ;
        return ;
    }
    
   
    print(arr,n-1) ; 
     
    int x = vec.size();
    for (int i = 0; i < x; i++) {
        vec.push_back(vec[i]);        // copy old subset
        vec.back().push_back(arr[n]); // add current element
    }     
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        print(nums , nums.size()-1) ;
        sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    return vec ;
    }
};
