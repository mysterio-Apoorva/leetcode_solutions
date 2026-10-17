class Solution {
public:
    int sum(int n) {
        int length = 0;

        while (n != 0) {
            length += n % 10;
            n /= 10;
        }

        return length;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({sum(nums[i]), nums[i]});
        }

        sort(arr.begin(), arr.end());

        unordered_map<int, int> pos;

        for (int i = 0; i < n; i++) {
            pos[arr[i].second] = i;
        }

        vector<bool> visited(n, false);
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || pos[nums[i]] == i)
                continue;

            int j = i;
            int size = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = pos[nums[j]];
                size++;
            }

            cnt += size - 1;
        }

        return cnt;
    }
};