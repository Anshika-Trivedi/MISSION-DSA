#include <iostream>
#include <vector>
using namespace std;

class MyCircularQueue {
private:
    vector<int> a;  
    int head;       
    int tail;     
    int sz;         
    int cap;        

public:
    
    MyCircularQueue(int k) : a(k), head(0), tail(0), sz(0), cap(k) {}

    
    bool enQueue(int value) { 
        if (sz == cap) return false;      
        a[tail] = value;               
        tail = (tail + 1) % cap;          
        ++sz;
        return true;
    }

    
    bool deQueue() {
        if (sz == 0) return false;        
        head = (head + 1) % cap;      
        --sz;
        return true;
    }

   
    int Front() {
        if (sz == 0) return -1;
        return a[head];
    }

    
    int Rear() {
        if (sz == 0) return -1;
        return a[(tail - 1 + cap) % cap];
    }

  
    bool isEmpty() {
        return sz == 0;
    }

    bool isFull() {
        return sz == cap;
    }
};

   
