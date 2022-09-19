// [2,1,4,3]
// [1,-1,3,-1]

#include<bits/stdc++.h>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
     stack<int>st;
     st.push(-1);
    for(int i=n-1;i>=0;i--)
    {
        int curr=arr[i];
        while(st.top()>=curr)
        {
            st.pop();
        }
        arr[i]=st.top();
        st.push(curr);
    }
    return arr;
}
