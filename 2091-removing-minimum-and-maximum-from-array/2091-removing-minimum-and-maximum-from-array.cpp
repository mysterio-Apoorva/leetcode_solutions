class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int m = 0;
        int M = 0;
        int n = nums.size();
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[M])
                M = i;
            else if (nums[i] < nums[m])
                m = i;
        }
        int l = max(M + 1, m + 1);
        int r = max(n - m, n - M);
        int i = 0;
        int count = 0;
        int reached = 0;
        while (reached != 2) {
            if (reached < 1) {
                if (i == m || i == M) {
                    reached++;
                    i = n - 2;
                }
                count++;
                i++;
            } else {
                if (i == m || i == M)
                    reached++;
                count++;
                i--;
            }
        }
        return min({l, r, count});
    }
};