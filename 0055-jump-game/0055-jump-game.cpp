class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return true;
        int l = n - 2;
        int r = n - 1;
        while (l >= 0) {
            if (r - l <= nums[l]) {
                r = l;
                l--;
            } else {
                l--;
            }
        }
        if (r == 0)
            return true;
        return false;
    }
};