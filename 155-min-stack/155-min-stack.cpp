class MinStack {
    
public:
    stack<long >s;
    long mn;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
        { mn=val;
        s.push(val);
        }
        else
            if(val<mn)
            {
                
                s.push((long)2*val-mn);
                mn=val;
            }
        else
            s.push(val);
    }
    
    void pop() {
        if(s.top()<mn)
            mn=(long)2*mn-s.top();
        s.pop();
    }
    
    int top() {
        if(s.top()<mn)
            return mn;
        return s.top();
    }
    
    int getMin() {
     return mn;   
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */