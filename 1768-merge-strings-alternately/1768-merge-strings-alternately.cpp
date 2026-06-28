class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int f = 0;
        int g = 0;
        int l = word1.size() + word2.size();

        string s(l, ' ');

        for (int i = 0; i < l; i++) {
            if (f < word1.size() && i % 2 == 0) {
                s[i] = word1[f];
                f++;
            } else if (g < word2.size() && i % 2 != 0) {
                s[i] = word2[g];
                g++;
            } else if (f >= word1.size() && g < word2.size()) {
                s[i] = word2[g];
                g++;
            } else if (g >= word2.size() && f < word1.size()) {
                s[i] = word1[f];
                f++;
            }
        }

        return s;
    }
};