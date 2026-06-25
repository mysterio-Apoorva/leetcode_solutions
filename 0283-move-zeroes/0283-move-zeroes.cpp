class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int* s = &nums[0];
        int* e = &nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(*s, *e);
                s++;
                e++;
            } else {
                s++;
            }
        }
    }
};