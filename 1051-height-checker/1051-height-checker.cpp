class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted = heights;
        int cnt = 0;

        for (int i = 0; i < heights.size() - 1; i++) {
            int min = i;
            for (int j = i + 1; j < heights.size(); j++) {
                if (heights[min] > heights[j]) {
                    min = j;
                }
            }
            swap(heights[min], heights[i]);
        }
        for (int i = 0; i < heights.size(); i++) {
            if (sorted[i] != heights[i])
                cnt++;
        }
        return cnt;
    }
};