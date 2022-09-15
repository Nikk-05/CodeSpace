class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pref(n);
        pref[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            pref[i]=pref[i-1]+nums[i];
        }
        // int max_len=INT_MIN;
        map<int,int>mp;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(pref[i]==k)
                cnt++;
            if(mp.find(pref[i]-k)!=mp.end())
            {
                cnt+=mp[pref[i]-k];
            }
            mp[pref[i]]++;
        }
        return cnt;
    }
};
