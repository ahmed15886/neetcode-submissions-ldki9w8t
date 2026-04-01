class MinStack {
public:
    stack<int>st;
    stack<int>min_st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        int min_v = min_st.empty()?val:min(val,min_st.top());
        min_st.push(min_v);
    }
    
    void pop() {
        st.pop();
        min_st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};
