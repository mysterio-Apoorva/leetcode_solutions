class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> rank = score;
        int pos;
        string s;
        vector<string> ans;

        sort(rank.begin(), rank.end());
        reverse(rank.begin(), rank.end());

        int l = 0;
        int r = 0;

        while (l < score.size()) {
            if (score[l] != rank[r]) {
                r++;
            } 
            else {
                pos = r + 1;

                if (pos == 1)
                    s = "Gold Medal";
                else if (pos == 2)
                    s = "Silver Medal";
                else if (pos == 3)
                    s = "Bronze Medal";
                else
                    s = to_string(pos);

                ans.push_back(s);
                r = 0;
                   l++;
            }

         
        }

        return ans;
    }
};