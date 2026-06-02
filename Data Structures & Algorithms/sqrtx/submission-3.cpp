class Solution {
public:
    int mySqrt(int x) {
          
        int low = 1;
        int high = x/2;
        int idx = 0 ;
       

       if(x ==1 ){
        return 1 ;
       }
        while(low <= high){

            long long int mid = low + (high-low)/2 ;

            if(mid*mid <= x ){
                idx = mid ;
                low = mid+1 ;
            }else{
                high = mid-1 ;
            }
        }

        return idx ;
    
    }
};