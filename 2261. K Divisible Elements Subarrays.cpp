class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int n = nums.size();
        set<vector<int>> ans;

        for(int i=0; i<n; i++) {
            vector<int> v;
            int x = 0;
            for(int j=i; j<n; j++) {
                v.push_back(nums[j]);
                if(nums[j]%p==0) {
                    x++;
                }
                if(x>k) {
                    break;
                }
                ans.insert(v);
            }
        }

        return ans.size();
    }
};
