#include <bits/stdc++.h> 
void sorted(stack<int>&stack , int ele)
{
    if(stack.empty() || stack.top()<ele)
    {
        stack.push(ele);
        return ;
    }
    
    int num=stack.top();
    stack.pop();
    sorted(stack,ele);
    stack.push(num);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
    if(stack.empty())
    {
        return ;
    }
    
    int num=stack.top();
    stack.pop();
    sortStack(stack);
    sorted(stack,num);
}
