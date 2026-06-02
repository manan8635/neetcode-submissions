class MyStack {
    queue <int> q1;
    queue <int> q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x) ;
    }
    
    int pop() {
        while(1){
            int x = q1.front() ;
            q1.pop() ;
            if(!q1.empty()){
                 q2.push(x)  ;
            }else{
               swap(q1,q2) ;
                return x ;
            }
          
        }
    }
    
    int top() {
        while(1){
            int x = q1.front() ;
            q1.pop() ;
            if(!q1.empty()){
                 q2.push(x)  ;
            }else{
                q2.push(x)  ;
               swap(q1,q2) ;
                return x ;
            }
          
        }
    }
    
    bool empty() {
        return q1.empty() ;
    }
};
