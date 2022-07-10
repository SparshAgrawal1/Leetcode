class MinStack {
public:
    map<int,int> m;
stack<int> q;
    MinStack() {
        map<int,int> m1;
    stack<int> q1;
    m=m1;
    q=q1;
    }
    
    void push(int x) {
        q.push(x);
    m[x]++;
    }
    
    void pop() {
        if(q.size()>0)
        {
            int l=q.top();
            q.pop();
            m[l]--;
            if(m[l]==0)
            {
                m.erase(l);
            }
        }
    }
    
    int top() {
        if(q.size()==0)
        {
            return -1;
        }
        return q.top();
    }
    
    int getMin() {
        int l=-1;
        for(auto x:m)
        {
            l=x.first;
            break;
        }
        return l;
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