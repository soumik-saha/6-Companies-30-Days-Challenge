class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string nos[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        vector<string> ans;

        if(digits.size()==0)
            return ans;
        
        string ds;

        solve(0, ds, ans, digits, nos);

        return ans;
    }
    void solve(int i, string& ds, vector<string>& ans, string digits, string nos[]) {
        if(i>=digits.size()) {
            ans.push_back(ds);
            return;
        }

        int number = digits[i] - '0';
        string val = nos[number];

        for(int ind = 0; ind<val.size(); ind++) {
            ds.push_back(val[ind]);
            solve(i+1, ds, ans, digits, nos);
            ds.pop_back();
        }
    }
};
