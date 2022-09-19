// Only relevant bracket is acceptable....like (a+b)+(c)   here c having bracket is useless....

// Approach-------
// store opening bracket or operater and as closing bracket encountered check for operators if present then pop whole expression till opening bracket.

#include <bits/stdc++.h> 

bool check(stack<char>&st)
{
    bool flag=false;
    while(!st.empty())
    {
        char ch=st.top();
//         cout<<ch<<" ";
        if( ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
            flag=true;
            st.pop();
        }
        else
        {
            break;
        }
    }
    return flag;
}


bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='('|| s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
        {
//             cout<<s[i]<<"->";
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(check(st))
            {
                if(st.top()=='(')
                    st.pop();
            }
            else
            {
                return true;
            }
        }
    }
//     if(!st.empty())
//         return true;
    return false;
}
