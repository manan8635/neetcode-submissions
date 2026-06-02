class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0 ;
        int j = numbers.size()-1;
        vector <int> result ;
        while(i < j){
            if(target > (numbers[i] + numbers[j]) ){
                i++ ;
            }else if (target < (numbers[i] + numbers[j]) ){
                j--;
            }else {
                result.push_back(i+1) ;
                result.push_back(j+1) ;
                return result ;
            }
        }
        return result;
    }
};
