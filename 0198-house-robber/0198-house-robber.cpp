class Solution {
public:
    int rob(vector<int>& nums) {
        int s1 = 0, s2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            int curr = max(s1 + nums[i], s2);
            s1 = s2;
            s2 = curr;
        }

        return s2;
    }
};