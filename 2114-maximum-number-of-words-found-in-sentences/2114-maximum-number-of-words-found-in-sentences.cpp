class Solution {
public:
    int Count(string s) {
        int cnt = 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                cnt++;
            }
        }
        return cnt;
    }
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for (int i = 0; i < sentences.size(); i++) {
            int x = Count(sentences[i]);
            if (x > max)
                max = x;
        }
        return max;
    }
};