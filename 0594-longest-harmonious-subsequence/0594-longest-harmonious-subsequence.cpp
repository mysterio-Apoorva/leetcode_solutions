class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> mp;

        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        int maxm = 0;

        for(auto x : mp)
        {
            if(mp.find(x.first + 1) != mp.end())
            {
                maxm = max(maxm, x.second + mp[x.first + 1]);
            }
        }

        return maxm;
    }
};