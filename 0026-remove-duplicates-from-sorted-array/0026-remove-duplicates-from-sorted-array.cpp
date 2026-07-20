class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.empty())
            return 0;

        int k = 1;
        int l = 0;
        int r = 1;

        while (r < nums.size()) {

            if (nums[r] == nums[l]) {
                r++;
            } else {
                l++;
                swap(nums[l], nums[r]);
                k++;
                r++;
            }
        }

        return k;
    }
};