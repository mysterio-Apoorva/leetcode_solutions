class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10)
            return false;
        if (n == 10)
            return true;
        int i = 10;
        int turn = 0;
        while (n != 0) {
            if (n - i < i - 1) {
                if (turn)
                    return false;
                return true;
            }

            n = n - i;
            i--;
            if(turn==0)
            turn=1;
            else
            turn=0;
        }
        return false;
    }
};