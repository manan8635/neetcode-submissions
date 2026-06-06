class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0 ;
        int high = 1 ;
        int res = INT_MAX ;
        int ans = 0 ;
        int sum = nums[low] ;
        while(high <= nums.size()){
            if(sum < target){
                if(high == nums.size()) break ;
                sum += nums[high] ;
                high++ ;
                continue ;
            }
            if(sum >= target){
                int val = high-low ;
                res = min(res,val) ;
                ans = res ; 
                sum = sum - nums[low] ;
                low++ ;
            }
        }
        return ans ;
    }
};