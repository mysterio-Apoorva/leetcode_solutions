class Solution {
public:
    int longestPalindrome(string s) {
        int freq[52] = {0};

        for (char c : s) {
            if (c >= 'a' && c <= 'z')
                freq[c - 'a']++;
            else
                freq[c - 'A' + 26]++;
        }

        int ans = 0;
        bool odd = false;

        for (int i = 0; i < 52; i++) {
            ans += (freq[i] / 2) * 2;

            if (freq[i] % 2 == 1)
                odd = true;
        }

        if (odd)
            ans++;

        return ans;
    }
};