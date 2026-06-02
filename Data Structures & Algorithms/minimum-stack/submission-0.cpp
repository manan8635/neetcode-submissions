class MinStack {
    stack <int> st1;
    stack <int> st2;
     
public:
     
    MinStack() {
        
    }
    
    void push(int val) {
            st1.push(val) ;
    }
    
    void pop() {
            st1.pop() ;
    }
    
    int top() {
        return st1.top() ;
    }
    
    int getMin() {
        int x = INT_MAX ;
        st2 = st1 ;
        while(!st2.empty()){
            if(st2.top() < x){
                x = st2.top() ;
            }
            
            st2.pop() ;
        }
        return x ;
    }
};
