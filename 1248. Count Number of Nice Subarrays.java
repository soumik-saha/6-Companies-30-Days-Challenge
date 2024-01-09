class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
        return atmost(nums, k) - atmost(nums, k-1);
    }

    public int atmost(int[] nums, int k) {
        int ans = 0, i = 0, n = nums.length;
        for(int j=0; j<n; j++) {
            k -= nums[j] % 2;
            while(k<0) {
                k += nums[i++] % 2;
            }
            ans += j - i + 1;
        }

        return ans;
    }
}
