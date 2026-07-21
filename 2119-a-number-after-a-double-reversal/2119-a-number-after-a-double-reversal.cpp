class Solution {
public:
    int Reverse(int n) {
        int d = 0;
        int rev = 0;
        while (n != 0) {
            d = n % 10;
            rev = rev * 10 + d;
            n = n / 10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int x = Reverse(num);
        x = Reverse(x);
        if (num == x)
            return true;
        else
            return false;
    }
};