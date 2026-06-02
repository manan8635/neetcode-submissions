class StockSpanner {
    vector <int> vec ;
public:
    StockSpanner() {
       
    }
    
    int next(int price) {
        int x = vec.size() ;
        int val = 1 ;
         
        if(x == 0){
            vec.push_back(price) ;
            return 1 ;
        }
        vec.push_back(price) ;
        for(int i = 0 ; i < x ; i++ ){
 
             
             
            if(vec[x-i-1] > price){
                return val ;
            }else{
                val++ ;
            }
           
        }
         
        return val ;

    }
};