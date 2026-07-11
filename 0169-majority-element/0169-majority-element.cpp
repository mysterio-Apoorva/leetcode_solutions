class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = nums[0];
        int cnt = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (cnt > 0) {
                if (nums[i] == element) {
                    cnt++;
                }
                if (nums[i] != element) {
                    cnt--;
                }
            } else {
                element = nums[i];
                cnt++;
            }
        }
        return element;
    }
};