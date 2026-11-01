class Solution {
public:
    int minMoves(vector<int>& nums) {
        // gand faad logic...
        int sum = 0;
        int m = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= m)
                m = nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + (nums[i] - m);
        }
        return sum;
    }
};