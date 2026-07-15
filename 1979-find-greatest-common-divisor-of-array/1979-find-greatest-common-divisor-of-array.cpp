class Solution {
public:
    int findGCD(vector<int>& nums) {
        int m = nums[0];
        int M = nums[0];
        for (int i : nums) {
            m = min(i, m);
            M = max(i, M);
        }
        return gcd(m, M);
    }
};