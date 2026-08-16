class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        stack<int> st;

        int n = s.length();

        for (int i = 0; i <= n; i++) {
            st.push(i);

            if (i == n || s[i] == 'I') {
                while (!st.empty()) {
                    ans.push_back(st.top());
                    st.pop();
                }
            }
        }
        return ans;
    }
};