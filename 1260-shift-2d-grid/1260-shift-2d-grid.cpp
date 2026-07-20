class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        int sz = row * col;
         k = k % sz;
        vector<vector<int>> ans(row, vector<int>(col));
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int idx = i * col + j;

                int newIdx = (idx + k) % sz;

                int newRow = newIdx / col;
                int newCol = newIdx % col;

                ans[newRow][newCol] = grid[i][j];
            }
        }
        return ans;
    }
};