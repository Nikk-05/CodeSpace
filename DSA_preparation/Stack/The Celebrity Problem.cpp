#include <bits/stdc++.h> 
int findCelebrity(int n) {
     stack<int>st;
    for(int i=0;i<n;i++)
    {
        st.push(i);
    }
    
    while(st.size()>1)
    {
        int a=st.top();
        st.pop();
        int b=st.top();
        st.pop();
        if(knows(a,b))
        {
            st.push(b);
        }
        else if(knows(b,a))
        {
            st.push(a);
        }
    }
    if(st.empty())
        return -1;
    
    int x=st.top();
    for(int i=0;i<n;i++)
    {
        if(knows(x,i)==true)
            return -1;
        if(i!=x && knows(i,x)==0)
        {
            return -1;
        }
    }
    return x;
    
}
