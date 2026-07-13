class Solution {
public:
    bool checkRecord(string s) {
        int cntl = 0;
        int cnta = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A')
                cnta++;
            if (s[i] == 'L') {
                if (i >= 1 && i <= s.size() - 2) {
                    if (s[i - 1] == 'L' && s[i + 1] == 'L')
                        return false;
                }
            }
        }
        if (cnta >= 2)
            return false;
        return true;
    }
};