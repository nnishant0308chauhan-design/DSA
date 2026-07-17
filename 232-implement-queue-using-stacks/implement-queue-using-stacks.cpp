class MyQueue {
public:
stack<int>instack;
stack<int>outstack;
int top;
int front;
void transfer(){
    while(!instack.empty()){
        outstack.push(instack.top());
        instack.pop();
    }
}
    MyQueue() {
    }
    
    void push(int x) {
        instack.push(x);
    }
    
    int pop() {
        if(!outstack.empty()){
             front=outstack.top();
            outstack.pop();
        }else{
            transfer();
             front=outstack.top();
             outstack.pop();
        }
        return front;
    }
    
    int peek() {
         if(!outstack.empty()){
            top=outstack.top();
        }else{
            transfer();
             top=outstack.top();
        }
        return top;
    }
    
    bool empty() {
        if(instack.empty()&&outstack.empty()){
            return true;
        }else{
            return false;
        }
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