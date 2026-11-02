class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int median;
        if (n % 2 != 0)
            median = nums[n / 2];
        else if (n % 2 == 0)
            median = (nums[n / 2 - 1] + nums[n / 2]) / 2;

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += abs(median - nums[i]);
        }
        return cnt;
    }
};