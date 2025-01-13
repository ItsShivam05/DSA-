class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        int ans = 0;
        for(auto p:mp)
        {
            int count = p.second;
            while(count>=3)
            {
                count-=2;
               
            }
            ans+=count;

        }
        return ans;
        
    }
};