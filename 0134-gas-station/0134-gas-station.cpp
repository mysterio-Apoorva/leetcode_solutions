class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int fuel = 0;
        int total = 0;

        for (int i = 0; i < gas.size(); i++) {
            fuel += gas[i] - cost[i];
            total += gas[i] - cost[i];

            if (fuel < 0) {
                start = i + 1;
                fuel = 0;
            }
        }

        return total < 0 ? -1 : start;
    }
};