class Solution {
public:
    string interpret(string command) {
        string s(command.size(), ' ');
        int j = 0;
        for (int i = 0; i < command.size(); i++) {
            if (command[i] == 'G') {
                s[j] = 'G';
                j++;
            } else if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    s[j] = 'o';
                    j++;
                    i++;
                } else if (command[i + 1] == 'a' && command[i + 2] == 'l' &&
                           command[i + 3] == ')') {
                    s[j] = 'a';
                    s[j + 1] = 'l';
                    j = j + 2;
                    i = i + 3;
                }
            }
        }
        return s.substr(0, j);
    }
};