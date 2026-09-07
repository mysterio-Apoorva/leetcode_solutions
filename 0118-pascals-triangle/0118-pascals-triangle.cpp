class Solution {
public:
    vector<int> ansRow(int n) {
        long long ans = 1;
        vector<int> row;
        row.push_back(ans);

        for (int c = 1; c < n; c++) {
            ans = ans * (n - c);
            ans = ans / c;
            row.push_back(ans);
        }

        return row;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ANS;

        for (int i = 1; i <= numRows; i++) {
            ANS.push_back(ansRow(i));
        }

        return ANS;
    }
};