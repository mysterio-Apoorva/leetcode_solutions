
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int odd = 0, even = 1;
        int sum = 0, ans = 0;
        int mod = 1e9 + 7;

        for (int i = 0; i < arr.size(); i++) {
            sum = (sum + arr[i]) % 2;

            if (sum == 0) {
                ans = (ans + odd) % mod;
                even++;
            } else {
                ans = (ans + even) % mod;
                odd++;
            }
        }

        return ans;
    }
};
