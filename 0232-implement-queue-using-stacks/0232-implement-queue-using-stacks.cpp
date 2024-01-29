class MyQueue {
public:
    stack<int> f;
    stack<int> s;
    MyQueue() {
        f = stack<int>();
        s = stack<int>();
    }
    
    void push(int x) {
        f.push(x);
    }
    
    int pop() {
        if(s.empty())
        {
            while(!f.empty())
            {
                s.push(f.top());
                f.pop();
            }
        }
        int res=s.top();
        s.pop();
        return res;
    }
    
    int peek() {
       if(s.empty())
        {
            while(!f.empty())
            {
                s.push(f.top());
                f.pop();
            }
        }
        return s.top(); 
    }
    
    bool empty() {
        return s.empty() && f.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */