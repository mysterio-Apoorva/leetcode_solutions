class Solution {
public:
    int days(string s) {
        int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int m = stoi(s.substr(0, 2));
        int d = stoi(s.substr(3, 2));

        for (int i = 0; i < m - 1; i++) {
            d += months[i];
        }
        return d;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        int AA = days(arriveAlice);
        int AB = days(arriveBob);
        int LA = days(leaveAlice);
        int LB = days(leaveBob);

        if (AA > LA || AB > LB)
            return 0;
        else if (AA > LB || AB > LA)
            return 0;
        else
            return min(LA, LB) - max(AA, AB)+1;
    }
};