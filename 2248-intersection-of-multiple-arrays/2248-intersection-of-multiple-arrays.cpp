class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> freq(1001, 0);
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                freq[nums[i][j]]++;
            }
        }

        for (int i = 1; i <= 1000; i++) {
            if (freq[i] == nums.size()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};