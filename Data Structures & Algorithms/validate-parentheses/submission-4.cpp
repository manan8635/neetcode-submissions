class Solution {
    stack <int> st ;
public:
    bool isValid(string s) {
        if(s.size() == 1 ){
            return 0 ;
        }
            for(int i = 0 ; i < s.size() ; i++){
                if(s[i] == '(' || s[i] == '{' || s[i] == '['  ){
                    st.push(s[i]) ;       
                }else{
                    if(st.empty()){
                        return 0 ;
                    }
                    if((st.top() == '(' && s[i] == ')') ||( st.top() == '{' && s[i] == '}') ||( st.top() == '[' && s[i] == ']')){                      
                       st.pop() ;
                        continue ;
                    }else{
                        return 0 ;
                    }
                }
            }
          if(st.empty()){
             return 1 ;
            }
       return 0 ;    
    }
};
