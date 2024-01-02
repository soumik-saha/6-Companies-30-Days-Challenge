class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        unordered_map<string, vector<string>> mp;
        for(int i=0; i<access_times.size(); i++) {
            mp[access_times[i][0]].push_back(access_times[i][1]);
        }
        for(int i=0; i<access_times.size(); i++) {
            sort(mp[access_times[i][0]].begin(), mp[access_times[i][0]].end());
        }
        vector<string> res;
        for(auto it : mp) {
            if(it.second.size()<3)
                continue;
            bool added = false;
            for(int i=0; i<it.second.size(); i++) {
                int start = stoi(it.second[i]);
                if(start>2300 && start<0100)
                    continue;
                int count = 1;
                for(int j=i+1; j<it.second.size(); j++) {
                    if(stoi(it.second[j]) - start >= 100)
                        break;
                    count++;
                    if(count>=3) {
                        res.push_back(it.first);
                        added = true;
                        break;
                    }
                }
                if(added)
                    break;
            }
        }
        return res;
    }
};
