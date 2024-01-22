class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans = 0;
        if(k==0) {
            unordered_map<int, int> mp;
            for(int it:nums) {
                mp[it]++;
            }
            for(auto it:mp) {
                if(it.second>=2) {
                    ans++;
                }
            }
        }
        else {
            unordered_set<int> st(nums.begin(), nums.end());
            nums.clear();
            for(int it : st) {
                nums.push_back(it);
                cout<<it<<endl;
            }
            for(int i=0; i<nums.size(); i++) {
                for(int j=i+1; j<nums.size(); j++) {
                    if(abs(nums[i]-nums[j])==k) {
                        ans++;
                        cout<<nums[i]<<" "<<nums[j]<<endl;
                    }
                }
            }
        }
        return ans;
    }
};
