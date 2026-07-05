class Solution {
public:
    int digitsum(int n) {
        int d;
        int sum = 0;
        while (n != 0) {
            d = n % 10;
            sum = sum + d;
            n = n / 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int min = digitsum(nums[0]), x;
        for (int i = 1; i < nums.size(); i++) {
            x = digitsum(nums[i]);
            if (x < min)
                min = x;
        }
        return min;
    }
};