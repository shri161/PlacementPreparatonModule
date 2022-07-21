class StockSpanner {
    stack<pair<int,int>>s;
    int c=0;
    
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int x=-1;
            while(!s.empty()&&s.top().first<=price)
                s.pop();
            if(!s.empty())
           x=(s.top().second);
        s.push({price,c});
        c++;
        return (c-1)-x;
            
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */