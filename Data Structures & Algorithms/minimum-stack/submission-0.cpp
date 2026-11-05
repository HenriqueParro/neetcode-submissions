class MinStack {

private:
    stack<int> pilha;
    stack<int> s_minimo;
    int i_minimo;

public:
    MinStack() {
        i_minimo = INT_MAX;
    }
    
    void push(int val) {
        pilha.push(val);
        if(val <= i_minimo){
            i_minimo = val;
            s_minimo.push(val);
        }            
    }
    void pop() {
        int val = pilha.top();        
        pilha.pop();
        if(val == i_minimo){
            s_minimo.pop();
            
            if(s_minimo.empty()) {
                i_minimo = INT_MAX;
            }
            else {
                i_minimo = s_minimo.top();
            }
        }

    }
    
    int top() {
        return pilha.top();
    }
    
    int getMin() {
        return i_minimo;
    }
};
