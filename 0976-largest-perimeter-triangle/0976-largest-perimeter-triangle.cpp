class Solution {
public:
    bool triangleinequality(int a, int b, int c) {
        if (a + b > c && a + c > b && b + c > a)
            return true;
        return false;
    }

    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if (nums.size() < 3)
            return 0;

        for (int i = nums.size() - 3; i >= 0; i--) {
            if (triangleinequality(nums[i], nums[i + 1], nums[i + 2]))
                return nums[i] + nums[i + 1] + nums[i + 2];
        }

        return 0;
    }
};