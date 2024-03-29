class MedianFinder {
public:
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {

        if(maxheap.empty() and minheap.empty()){
            maxheap.push(num);
        }
        else{
            if(maxheap.top() < num){
                minheap.push(num);
            }
            else{
                maxheap.push(num);
            }
        }

        //  balancing
        int n = maxheap.size();
        int m = minheap.size();

        if(abs(n-m) == 2)
        {
            if(n > m){
                int x = maxheap.top();
                maxheap.pop();
                minheap.push(x);
            }

            else{
                int x = minheap.top();
                minheap.pop();
                maxheap.push(x);
            }
        } 
    }
    
    double findMedian() {
        int n = maxheap.size();
        int m = minheap.size();

        if((n+m) % 2){
            if(n > m){
                return 1.0 * maxheap.top();
            }
            else{
                return 1.0 * minheap.top();
            }
        }
        else{
            return (double)(maxheap.top() + minheap.top()) / 2.0;
        }
    }
};


/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */