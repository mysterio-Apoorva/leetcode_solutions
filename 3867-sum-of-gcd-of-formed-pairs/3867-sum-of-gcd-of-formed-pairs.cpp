class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int grt = nums[0];
        vector<int> prefixGCD;
        prefixGCD.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            grt = max(nums[i], grt);
            int m = gcd(nums[i], grt);
            prefixGCD.push_back(m);
        }
        sort(prefixGCD.begin(), prefixGCD.end());
        int left = 0;
        int right = nums.size() - 1;
        long long sum = 0;
        while (left < right) {
            sum = sum + gcd(prefixGCD[left], prefixGCD[right]);
            left++;
            right--;
        }
        return sum;
    }
};