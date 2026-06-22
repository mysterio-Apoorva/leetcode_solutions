class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> running_sums(nums.size());
        running_sums[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            running_sums[i] = nums[i] + running_sums[i - 1];
        }
        return running_sums;
    }
};