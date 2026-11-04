
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> ans = nums;
        sort(ans.begin(), ans.end());

        if (ans[ans.size() - 1] >= 2 * ans[ans.size() - 2]) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == ans[ans.size() - 1])
                    return i;
            }
        }
        return -1;
    }
};
