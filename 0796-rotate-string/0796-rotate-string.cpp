class Solution {
public:
    bool rotateString(string s, string goal) {
        int k;
        string t = s;
        for (k = 0; k < s.size(); k++) {
            reverse(s.begin(), s.end());
            reverse(s.begin(), s.begin() + k);
            reverse(s.begin() + k, s.end());
            if (s == goal)
                return true;
            s = t;
        }
        return false;
    }
};