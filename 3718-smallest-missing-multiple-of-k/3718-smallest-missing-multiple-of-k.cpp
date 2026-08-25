class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        int flag = 0;
        int i = 1;
        while (flag == 0) {
            if (mp.find(i*k) == mp.end())
                flag++;
            i++;
        }
        return (i-1)*k;
    }
};