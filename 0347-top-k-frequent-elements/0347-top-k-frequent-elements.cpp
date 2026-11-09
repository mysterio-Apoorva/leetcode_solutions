
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        vector<pair<int, int>> v;
        int i = 0;

        while (i < nums.size()) {
            int j = i;

            while (j < nums.size() && nums[j] == nums[i]) {
                j++;
            }

            v.push_back({j - i, nums[i]});
            i = j;
        }

        sort(v.rbegin(), v.rend());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
