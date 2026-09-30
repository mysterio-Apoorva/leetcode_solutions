class Solution {
public:
    bool search(int n, int l, int h, vector<int>& nums) {
        if (l > h)
            return false;

        int mid = l + (h - l) / 2;

        if (nums[mid] > n)
            return search(n, l, mid - 1, nums);
        else if (nums[mid] < n)
            return search(n, mid + 1, h, nums);
        else
            return true;
    }

    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());

        while (search(original, 0, nums.size() - 1, nums)) {
            original *= 2;
        }

        return original;
    }
};