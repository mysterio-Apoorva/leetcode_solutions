class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int max = 0;
        for (int i = 0; i < colors.size() - 1; i++) {
            for (int j = i; j < colors.size(); j++) {
                if (colors[i] != colors[j]) {
                    if ((j - i) >= max)
                        max = j - i;
                }
            }
        }
        return max;
    }
};