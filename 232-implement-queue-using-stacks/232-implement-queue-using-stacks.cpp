class MyQueue {
    int* arr;
        int qfront;
    int rear;
    int size;
public:
    MyQueue() {
        size=10000001;
  arr=new int[size];
        qfront=0,rear=0;
        
    }
    
    void push(int x) {
        if(rear==size)
        {
            
        }
        else
        {
            arr[rear]=x;
            rear++;
        }
    }
    
    int pop() {
        int ans;
        if(qfront ==-1)
        {
            
        }
        else
        {
            ans=arr[qfront];
            qfront++;
            if(qfront==rear)
            {
                qfront=0;
                rear=0;
            }
        }
        return ans;
        
    }
    
    int peek() {
        int ans;
        if(qfront>=0)
        {
            ans=arr[qfront];
        }
        return ans;
    }
    
    bool empty() {
        if(qfront == rear)
        {
            return true;
        }
        else
        {
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