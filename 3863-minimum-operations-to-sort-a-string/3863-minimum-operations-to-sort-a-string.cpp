class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        if (is_sorted(s.begin(), s.end())) return 0;

        if (n == 2) return -1;

        char mn = *min_element(s.begin(), s.end());
        char mx = *max_element(s.begin(), s.end());

        if (s[0] == mn || s[n - 1] == mx) return 1;

        bool minOnlyLast = (count(s.begin(), s.end(), mn) == 1 && s[n - 1] == mn);
        bool maxOnlyFirst = (count(s.begin(), s.end(), mx) == 1 && s[0] == mx);

        if (minOnlyLast && maxOnlyFirst) return 3;
        return 2;
    }
};