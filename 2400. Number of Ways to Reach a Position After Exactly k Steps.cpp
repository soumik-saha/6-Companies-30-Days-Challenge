class Solution {
public:
    const int MOD = 1e9+7;
    int numberOfWays(int startPos, int endPos, int k) {
        vector<vector<int>> dp(1001, vector<int>(1001));
        return dfs(k, abs(startPos-endPos), dp);
    }
private:
    int dfs(int k, int d, vector<vector<int>>& dp) {
        if(d>=k)
            return d==k;
        if(dp[k][d]==0)
            dp[k][d] = (1 + dfs(k-1, d+1, dp) + dfs(k-1, abs(d-1), dp)) % MOD;
        
        return dp[k][d]-1;
    }
};
