#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int size;
    int front=-1;
    int rear=-1;
    
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        this->size=n;
        arr=new int[n];
        front=rear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if(rear==(front-1)%(size-1) || front==0 && rear==size-1)
            return false;
        else if(front==-1)
        {
            front=rear=0;
        }
        else if(rear==size-1 && front!=0)
        {
            rear=0;
        }
        else
        {
          rear++;  
        }
        arr[rear]=value;
        return true;  
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front==-1)
            return -1;
        else 
        {   
            int val=arr[front];
            if(front==rear)
            {
                front=rear=-1;
            }
            else if(front==size-1)
            {
               front=0; 
            }
            else
            {
                front++;
            }
            return val;
        }
    }
};