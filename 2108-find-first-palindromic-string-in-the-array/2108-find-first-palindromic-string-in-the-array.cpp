class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s = "";
        for (int i = 0; i < words.size(); i++) {
            string temp = words[i];
            reverse(words[i].begin(), words[i].end());
            if (temp == words[i]) {
                return s = words[i];
            }
        }
        return s;
    }
};