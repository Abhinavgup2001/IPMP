class MinStack {
    
   long long int minEle;
    stack<long long int> s;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int a) {
        
        if(s.size()==0){
	s.push(a);
	minEle=a;
	}
	
	else if(a>=minEle){
	    s.push(a);
	}
	else{
        long long int temp=a;
        temp=temp*2;
        
	    s.push(temp-minEle);
	    minEle=a;
	}
        
        
    }
    
    void pop() {
        
        if(s.top()>=minEle)
 s.pop();
else{
minEle=2*(minEle)-s.top();
s.pop();

}
        
        
    }
    
    int top() {
        
        if(s.top()>=minEle)
            return s.top();
        
        else
            return minEle;
        
        
    }
    
    int getMin() {
     
        return minEle;
        
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
