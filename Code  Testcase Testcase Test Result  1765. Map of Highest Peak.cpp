class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        vector<vector<int>> ans(isWater.size(), vector<int>(isWater[0].size(), INT_MAX));
        queue<pair<int, int>> q;

        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};

        for(int i=0; i<isWater.size(); i++) {
            for(int j=0; j<isWater[0].size(); j++) {
                if(isWater[i][j]==1) {
                    q.push({i, j});
                    ans[i][j] = 0;
                }
            }
        }
        
        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(int i=0; i<4; i++){
                int a = dx[i] + x;
                int b = dy[i] + y;

                if(a>=0 && a<ans.size() && b>=0 && b<ans[0].size() && ans[a][b]>1+ans[x][y]) {
                    ans[a][b] = 1+ans[x][y];
                    q.push({a, b});
                }
            }
        }
        return ans;
    }
};
