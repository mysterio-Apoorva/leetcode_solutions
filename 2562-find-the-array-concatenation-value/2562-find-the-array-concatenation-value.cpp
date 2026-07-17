class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {

        long long ans = 0;
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {

            long long temp = nums[r];
            int x = nums[r];

            while (x > 0) {
                nums[l] *= 10;
                x /= 10;
            }

            ans += nums[l] + temp;

            l++;
            r--;
        }

        if (l == r)
            ans += nums[l];

        return ans;
    }
};