#include <bits/stdc++.h> 
class Queue {
        int *arr;
        int size;
        int qfront;
        int rear;
public:
    Queue() {
        this->size=100000;
        arr=new int[size];
        qfront=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront == rear)
            return true;
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear!=size)
        {
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront!=rear)
        {
            int val=arr[qfront];
//             arr[qfront]=-1;
             qfront++;
            if(qfront==rear)
            {
               qfront=0;
                rear=0;
            }
            return val;
        }
        else
            return -1;
    }

    int front() {
        // Implement the front() function
        if(qfront==rear)
            return -1;
        else
        {
            return arr[qfront];
        }
        
    }
};
