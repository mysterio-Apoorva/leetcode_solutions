class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        if (nums.size() < 2)
            return ans;

        sort(nums.begin(), nums.end());

        int l = 0;
        int r = 1;

        while (r < nums.size()) {
            if (nums[l] == nums[r]) {
                ans.push_back(nums[l]);
                l = r + 1;
                r = l + 1;
            } else {
                l = r;
                r++;
            }
        }

        return ans;
    }
};