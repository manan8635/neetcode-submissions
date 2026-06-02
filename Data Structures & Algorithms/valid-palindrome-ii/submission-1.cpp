class Solution {
public:

    bool isValidPalindrome(string s , int left , int right){

        while(left < right){


            while(left < right && !isalnum(s[left])){
                left++ ;
            }
             while(left < right && !isalnum(s[right])){
                right-- ;
            }

        if( tolower(s[left]) != tolower(s[right]) ) return false ;


        left++;
        right--;

        }
    return true ;
    }
    bool validPalindrome(string s) {
        int left = 0 ;
        int right = s.size()-1;

        while(left < right){


            while(left < right && !isalnum(s[left])){
                left++ ;
            }
             while(left < right && !isalnum(s[right])){
                right-- ;
            }

          if( tolower(s[left]) != tolower(s[right]) ){
               return isValidPalindrome(s,left+1,right) || isValidPalindrome(s,left,right-1) ;

            }

            left++;
            right--;
        }

        return true ;
    }
};