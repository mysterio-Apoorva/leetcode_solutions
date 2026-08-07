#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool compare(string a, string b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> arr;

        // Convert all numbers to strings
        for (int num : nums) {
            arr.push_back(to_string(num));
        }

        // Sort using custom comparator
        sort(arr.begin(), arr.end(), compare);

        // If the largest element is "0", answer is "0"
        if (arr[0] == "0")
            return "0";

        // Concatenate all strings
        string ans = "";
        for (string s : arr) {
            ans += s;
        }

        return ans;
    }
};