#include<bits/stdc++.h>
using namespace std;

// Implementation stack using  array.
class stack
{
  public:
  int *arr;
  int size;
  int top=-1;
  
  stack(int size)
  {
    this->size=size;
    arr=new int[size];
    top=-1;
  }
//  Push an element into the stack 
  void push(int ele)
  {
    if(size-top>1)
    {
      top++;
      arr[top]=ele;
    }
    else
    {
      cout<<"Stack Overflow";
    }
  }
//  Pop top most element from the stack. 
   int pop()
  {
    if(size-top>=0)
    {
      int val=arr[top];
      top--;
      return val;
    }
    else
    {
      cout<<"Stack Underflow";
      return -1;
    }
  }
  
// Stack is empty of not
  bool isempty()
  {
    if(top==-1)
      return true;
    return false;
  }
  
//   Peek of a stack
  int peek()
  {
    if(top>=0 && top<size)
    {
      return arr[top];
    }
    else
    {
      cout<<"Stack Empty";
      return -1;
    }
  }
};  
  
  
  
  
  
  
