class MyCircularQueue {
private:
	vector<int> v;
	int cap, f = -1, r = -1;
public:
	MyCircularQueue(int k) {
		v.resize(k);
		cap = k;
	}

	bool enQueue(int value) {
        if(isFull()) return false;
        r = (r + 1) % cap;
        v[r] = value;
        if(f == -1) f = 0;
        return true;
	}

	bool deQueue() {
        if(isEmpty()) return false;
        if(f == r){
            f = -1;
            r = -1;
        }
        else f = (f + 1) % cap;
        return true;
	}

	int Front() {
        if(isEmpty()) return -1;
		return v[f];
	}

	int Rear() {
        if(isEmpty()) return -1;
		return v[r];
	}

	bool isEmpty() {
		return f == -1 && r == -1;
	}

	bool isFull() {
		return (r + 1)% cap == f;
	}
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */