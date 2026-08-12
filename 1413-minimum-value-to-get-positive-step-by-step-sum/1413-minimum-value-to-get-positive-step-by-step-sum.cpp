class Solution {
public:
    int minStartValue(vector<int>& nums) {

        for (int i = 1; ; i++) {
            int sum = i;
            bool valid = true;

            for (int j = 0; j < nums.size(); j++) {
                sum += nums[j];

                if (sum < 1) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                return i;
        }

        return 0;
    }
};