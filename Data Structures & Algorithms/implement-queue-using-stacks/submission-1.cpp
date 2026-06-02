
class MyQueue {
    stack <int> st1 ;
    stack <int> st2 ;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x) ;

    }
   
    // mujhe abhi tk toh ye lgta h ki jo hamara top element h stack ka , usko remove hi krna pdega agr hame stack ke (top-1)th element ko access krna h , iska doubt solve krna jruri h ki kya ye hi sach h . ya fir ham element ko access kr skte h top-1th ko without popping the top element
    int pop() {
        while( !st1.empty()){
            st2.push(st1.top()) ;
            st1.pop() ;
        }
      int val =  st2.top() ;
      st2.pop();
        while( !st2.empty()){
            st1.push(st2.top()) ;
            st2.pop() ;
        }
    return val ;
    }
    
    int peek() {
       while( !st1.empty()){
            st2.push(st1.top()) ;
            st1.pop() ;
        }
       int val = st2.top() ;
        while( !st2.empty()){
            st1.push(st2.top()) ;
            st2.pop() ;
        }

        return val ;
    }
    
    bool empty() {
        return st1.empty() ;
    }
};







