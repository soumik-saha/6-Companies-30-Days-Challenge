class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums,
                                       vector<vector<int>>& queries) {
        int n = nums.size(), m = queries.size();
        vector<int> res;
        for (int j = 0; j < m; j++) {
            vector<pair<string, int>> v;
            for (int l = 0; l < n; l++) {
                v.push_back(make_pair(
                    nums[l].substr(nums[l].size() - queries[j][1]),
                    l));
            }
            sort(v.begin(), v.end());
            int index = v[queries[j][0] - 1].second;

            res.push_back(index);
        }
        return res;
    }
};
