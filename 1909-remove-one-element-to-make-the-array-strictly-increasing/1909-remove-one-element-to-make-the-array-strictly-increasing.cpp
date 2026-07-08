class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int cnt = 0;
        int poo = -1;
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] >= nums[i + 1]) {
                cnt++;
                poo = i;
            }
        }

        if (cnt == 0)
            return true;

        if (cnt > 1)
            return false;

        if (poo == 0)
            return true;

        if (poo == n - 2)
            return true;

        bool removeLeft = nums[poo - 1] < nums[poo + 1];
        bool removeRight = nums[poo] < nums[poo + 2];

        return removeLeft || removeRight;
    }
};