class StockSpanner {
public:
stack<pair<int,int>>s;
    StockSpanner() {
        
        
    }
    
    int next(int price) {
      
       int res = 1;
       if(!s.size())
       s.push({price,1});  
       else{
         while(s.size() && s.top().first<=price){
             res+= s.top().second;
             s.pop();
         }
         s.push({price,res});
       }

       return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
        
    
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */