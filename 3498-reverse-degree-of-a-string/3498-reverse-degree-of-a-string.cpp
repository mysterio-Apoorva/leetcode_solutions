class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            int reversedPosition = 26 - (s[i] - 'a');
            int stringPosition = i + 1;

            ans += reversedPosition * stringPosition;
        }

        return ans;
    }
};