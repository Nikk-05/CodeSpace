#include <bits/stdc++.h>

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    vector<int>ans;
    map<int,int>mp;
    if(root==NULL)
        return ans;
    queue<pair<TreeNode<int>*,int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        TreeNode<int>* curr=q.front().first;
        int x=q.front().second;
        q.pop();
        if(mp.find(x)==mp.end())
        {
            mp[x]=curr->val;
        }
        if(curr->left!=NULL)
        {
            q.push({curr->left,x-1});
        }
        if(curr->right!=NULL)
        {
            q.push({curr->right,x+1});
        }
    }
    for(auto it:mp)
    {
        ans.push_back(it.second);
    }
    return ans;
}
