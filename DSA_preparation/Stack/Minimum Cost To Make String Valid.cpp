// { -> } in 1 cost find minimum cost to make all bracket balanced.
// }}}}}{    output - 4

#include <bits/stdc++.h> 
int findMinimumCost(string str) {
      stack<char>st;
    int ans=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='{')
            st.push(str[i]);
        else 
        {
            if(!st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else
            {
                st.push(str[i]);
            }
        }
    }
    
     if(st.size()%2!=0)
        return -1;
    
    while(!st.empty())
    {
        char a=st.top();
        st.pop();
        char b=st.top();
        st.pop();
        if(a==b)
            ans+=1;
        else
            ans+=2;
    }   
    return ans;
}

