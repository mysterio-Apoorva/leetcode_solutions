class Solution {
public:
    void solve(int n, int open, int close, string curr,
               vector<string>& s) {

        if (curr.size() == 2 * n) {
            s.push_back(curr);
            return;
        }

        if (open < n)
            solve(n, open + 1, close, curr + "(", s);

        if (close < open)
            solve(n, open, close + 1, curr + ")", s);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> s;
        solve(n, 0, 0, "", s);
        return s;
    }
};