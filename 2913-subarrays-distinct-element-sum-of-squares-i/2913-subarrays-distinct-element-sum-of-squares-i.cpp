
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            map<int, int> mp;
            int distinctCount = 0;

            for (int j = i; j < n; j++) {
                if (mp[nums[j]] == 0) {
                    distinctCount++;
                }

                mp[nums[j]]++;

                sum += distinctCount * distinctCount;
            }
        }

        return sum;
    }
};
