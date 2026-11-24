class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            long long prod = 1, gd = 0, lc = 1;

            for (int j = i; j < nums.size(); j++) {
                prod *= nums[j];
                gd = gcd(gd, (long long)nums[j]);
                lc = lcm(lc, (long long)nums[j]);

                if (prod == gd * lc)
                    ans = max(ans, j - i + 1);

                if (prod > 25200)
                    break;
            }
        }
        return ans;
    }
};