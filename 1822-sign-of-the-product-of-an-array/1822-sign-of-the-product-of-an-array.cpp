class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ncnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0)
                ncnt++;
            if (nums[i] == 0)
                return 0;
        }
        if (ncnt % 2 == 0)
            return 1;
        else
            return -1;
    }
};