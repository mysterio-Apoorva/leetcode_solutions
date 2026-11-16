
class Solution {
public:
    string sum(string s) {
        int total = 0;
        for (int i = 0; i < s.size(); i++) {
            total += s[i] - '0';
        }
        return to_string(total);
    }

    string digitSum(string s, int k) {
        while (s.size() > k) {
            string ans = "";

            for (int i = 0; i < s.size(); i += k) {
                string temp = s.substr(i, k);
                ans += sum(temp);
            }

            s = ans;
        }
        return s;
    }
};
