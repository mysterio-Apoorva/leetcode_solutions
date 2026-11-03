class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= max) {
                max = nums[i];
            }
        }
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            cnt += max - nums[i];
        }
        return cnt;
    }
};