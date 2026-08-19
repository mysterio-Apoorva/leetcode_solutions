class Solution {
public:
    string reversePrefix(string word, char ch) {
        int x = word.find(ch);
        reverse(word.begin(), word.begin() + x + 1);
        return word;
    }
};