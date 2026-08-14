class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        int l = 0;
        int r = 0;
        int ans = 0;
        while (r < n) {
            mp[s[r]]++;
            while (mp[s[r]] > 2) {
                mp[s[l]]--;
                l++;
            }
            r++;
            ans = max(ans, r - l );
        }
        return ans;
    }
};