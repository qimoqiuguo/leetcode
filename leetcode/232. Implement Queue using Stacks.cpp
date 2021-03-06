class Queue {
private:
    stack<int>input, output;
public:
    // Push element x to the back of queue.
    void push(int x) {
        input.push(x);
        
    }

    // Removes the element from in front of queue.
    void pop(void) {
        peek();
        if(!output.empty())output.pop();
    }

    // Get the front element.
    int peek(void) {
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        if(!output.empty())return output.top();
        else return -1;
        
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return input.empty() && output.empty();
        
    }
};
