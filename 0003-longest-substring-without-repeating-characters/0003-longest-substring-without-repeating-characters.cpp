class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 1)
            return 1;
            if(s.empty())
            return 0;
        unordered_map<char, int> mp;
        int l = 0;
        int length = 1;
        int r = 0;
        while (r < s.size()) {
            mp[s[r]]++;

            while (mp[s[r]] > 1) {
                mp[s[l]]--;
                l++;
            }
            length = max(length, r - l+1);
            r++;
        }
        return length;
    }
};