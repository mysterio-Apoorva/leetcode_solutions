class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum = 0;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i] == "C" && !st.empty()) {
                st.pop();
            }

            else if (operations[i] == "D" && !st.empty()) {
                st.push(2 * st.top());
            }

            else if (operations[i] == "+" && !st.empty()) {
                int first = st.top();
                st.pop();

                int second = st.top();

                st.push(first);
                st.push(first + second);
            }

            else {
                int x = stoi(operations[i]);
                st.push(x);
            }
        }

        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};