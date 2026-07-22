class Solution {
public:
    int Count(vector<int>& nums, int n) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (n > nums[i])
                cnt++;
        }
        return cnt;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans = nums;
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = Count(nums, nums[i]);
        }
        return ans;
    }
};