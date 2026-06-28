class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        char* f = &s[0];
        char* e = &s[s.size() - 1];

        while (f < e) {
            if (!isVowel(*f)) {
                f++;
            } else if (!isVowel(*e)) {
                e--;
            } else {
                swap(*f, *e);
                f++;
                e--;
            }
        }

        return s;
    }
};