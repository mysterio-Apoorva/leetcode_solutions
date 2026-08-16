class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = 1;
        int sum = 0;
        while (r < nums.size()) {
            sum = sum + min(nums[l], nums[r]);
            l=l+2;
            r=r+2;
        }
        return sum;
    }
};