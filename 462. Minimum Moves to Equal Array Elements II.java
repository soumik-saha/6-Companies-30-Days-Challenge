class Solution {
    public int minMoves2(int[] nums) {
        int n = nums.length;
        if(n==1)
            return 0;
        if(n==2)
            return Math.abs(nums[1]-nums[0]);

        Arrays.sort(nums);
        int ind = n/2;

        if(n%2==0) {
            long ans1 = 0L, ans2 = 0L;
            for(int i=0; i<n; i++) {
                if(i==ind)  continue;
                ans1 += Math.abs(nums[ind]-nums[i]);
            }
            for(int i=0; i<n; i++) {
                if(i==ind+1)  continue;
                ans2 += Math.abs(nums[ind+1]-nums[i]);
            }

            return (int) Math.min(ans1, ans2);
        } 
        else {
            int ans = 0;
            for(int i=0; i<n; i++) {
                if(i==ind)  continue;
                ans += Math.abs(nums[ind]-nums[i]);
            }

            return ans;
        }
    }
}
