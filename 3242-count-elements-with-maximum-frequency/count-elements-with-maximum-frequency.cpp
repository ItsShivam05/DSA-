class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       unordered_map<int,int>mp;
       int cnt = 0,mx = 0;
       for(int i = 0;i<nums.size();i++)
       {
        mp[nums[i]]++;
        mx = max(mx,mp[nums[i]]);
       }
       for(auto x: mp){
       if(x.second == mx) cnt+=x.second;}
       return cnt;
    }
};