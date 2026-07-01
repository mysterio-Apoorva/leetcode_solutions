class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat[0].size();
        if (n % 2 == 0) {
            for (int i = 0; i < n; i++) {
                sum = sum + mat[i][i] + mat[n - 1 - i][i];
            }
            return sum;
        } else {
            for (int i = 0; i < n; i++) {
                sum = sum + mat[i][i] + mat[n - 1 - i][i];
            }
            return sum - mat[(n - 1) / 2][(n - 1) / 2];
        }
    }
};