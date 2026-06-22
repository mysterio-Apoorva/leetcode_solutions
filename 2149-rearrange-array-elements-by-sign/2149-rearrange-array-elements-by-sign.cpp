class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int j = 0;
        int k = 1;
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                ans[j] = nums[i];
                j = j + 2;
            }
            if (nums[i] < 0) {
                ans[k] = nums[i];
                k = k + 2;
            }
        }
        return ans;
    }
};