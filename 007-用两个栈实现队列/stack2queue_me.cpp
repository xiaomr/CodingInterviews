class Solution
{
public:
    void push(int node)
    {
        stackIn.push(node);
    }

    int pop()
    {
       if (stackOut.empty()){
           while(!stackIn.empty()){
               int top = stackIn.top();
               stackOut.push(top);
               stackIn.pop();
           }
       }
       int front = stackOut.top();
       stackOut.pop();
       return front;
    }

    bool empty( ) {
        if (stackIn.empty() && stackOut.empty()) {
            return true;
        }
        return false;
    }


private:
   stack<int> stackIn;
   stack<int> stackOut;
};