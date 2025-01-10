class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0,mx = 0;
        map<int,int>mp;
        for(int  i = 0;i<n;i++)
        {
            mp[nums[i]]++;
            mx = max(mx,mp[nums[i]]);
        }
        for(auto x:mp)
        {
            if(x.second == mx) cnt+=x.second;
        }
        return cnt;

        
    }
};