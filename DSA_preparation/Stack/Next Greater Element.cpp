#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    stack<int>st;
    st.push(-1);
     for(int i=n-1;i>=0;i--)
     {
         int num=arr[i];
         while(st.top()!=-1 && st.top()<=num)
         {
             st.pop();
         }
         arr[i]=st.top();
         st.push(num);
     }
    return arr;
}
