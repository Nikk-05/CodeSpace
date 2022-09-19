class Solution {
   public: 
    vector<int> prev_smaller(vector<int>&arr,int n)
    {
        vector<int>prev(n);
        stack<int>st;
        st.push(-1);
        for(int i=0;i<n;i++)
        {
            while(st.top()!=-1 && arr[st.top()]>=arr[i])
            {
                st.pop();
            }
            prev[i]=st.top();
            st.push(i);
        }
        return prev;
    }
    
     vector<int> next_smaller(vector<int>&arr,int n)
    {
        vector<int>next(n);
        stack<int>st;
        st.push(-1);
        for(int i=n-1;i>=0;i--)
        {
            while(st.top()!=-1 && arr[st.top()]>=arr[i])
            {
                st.pop();
            }
            next[i]=st.top();
            st.push(i);
        }
        return next;
    }   
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        
        vector<int>prev(n);
        prev=prev_smaller(h,n);
        
        vector<int>next(n);
        next=next_smaller(h,n);
        
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int l=h[i];
            if(next[i]==-1)
                next[i]=n;
            int b=next[i]-prev[i]-1;
            ans=max(ans,l*b);
        }
        return ans;
    }
};
