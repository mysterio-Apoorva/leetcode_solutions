class Solution {
public:
    bool checkString(string s) {
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a')
                count++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a')
                count--;
            else if (s[i] == 'b') {
                if (count != 0)
                    return false;
            }
        }
        return true;
    }
};