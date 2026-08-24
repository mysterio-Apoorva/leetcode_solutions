class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int r = n - 1;
        int jump = 0;

        for (int i = 0; i < r; i++) {
            if ((r - i) <= nums[i]) {
                jump++;
                r = i;
                i = -1;
                if (r == 0)
                    return jump;
            }
        }
        return jump;
    }
};