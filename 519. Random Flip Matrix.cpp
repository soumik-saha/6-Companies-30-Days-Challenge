class Solution {
public:
    int mx = 0;
    int row = 0;
    int col = 0;
    unordered_set<int> s;
    Solution(int m, int n) {
        row = m;
        col = n;
        mx = m * n;
    }
    
    vector<int> flip() {
        if(mx == s.size())
            return {};
        
        int random = rand() % mx;
        while(s.count(random)) {
            random = (++random) % mx;
        }
        s.insert(random);
        return {random/col, random%col};
    }
    
    void reset() {
        s = {};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */
