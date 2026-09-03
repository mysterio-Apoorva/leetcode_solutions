class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int cnt = 0;
        int m = nums1[0];
        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 != 0) {
                cnt++;
            }
            m = min(m, nums1[i]);
        }
        if (cnt == 0)
            return true;
        if (m % 2 == 0)
            return false;
        return true;
    }
};