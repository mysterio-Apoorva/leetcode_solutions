class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int suff[n];
        int m = nums[n - 1];
        for (int i = nums.size() - 1; i >= 0; i--) {
            m = min(m, nums[i]);
            suff[i] = m;
        }
        int ans = nums[0];
        for (int r = 0; r < n; r++) {
            ans = max(ans, nums[r]);
            if (ans - suff[r] <= k)
                return r;
        }
        return -1;
    }
};