
class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x,
                             vector<int>& queries) {
        vector<pair<int, int>> a, q;
        vector<int> ans(queries.size()), count(n + 1, 0);

        for (int i = 0; i < logs.size(); i++)
            a.push_back({logs[i][1], logs[i][0]});

        for (int i = 0; i < queries.size(); i++)
            q.push_back({queries[i], i});

        sort(a.begin(), a.end());
        sort(q.begin(), q.end());

        int l = 0, r = 0, active = 0;

        for (int i = 0; i < q.size(); i++) {
            int time = q[i].first;

            while (r < a.size() && a[r].first <= time) {
                int id = a[r].second;
                if (count[id] == 0)
                    active++;
                count[id]++;
                r++;
            }

            while (l < r && a[l].first < time - x) {
                int id = a[l].second;
                count[id]--;
                if (count[id] == 0)
                    active--;
                l++;
            }

            ans[q[i].second] = n - active;
        }

        return ans;
    }
};
