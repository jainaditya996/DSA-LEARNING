class MinStack {
public:

    MinStack() {
       
    }
    vector<int>vec,vecmin;
    
    void push(int value) {
        vec.push_back(value);
             if(vecmin.empty()|| vecmin.back()>=value){
                vecmin.push_back(value);
             }
    }
    
    void pop() {
        
        if(vecmin.back()==vec.back()){
            vecmin.pop_back();
        }
        vec.pop_back();
       
    }
    
    int top() {
        return vec.back();
    }
    
    int getMin() {
        return vecmin.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */