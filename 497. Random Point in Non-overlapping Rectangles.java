class Solution {
    TreeMap<Integer, Integer> mp;
    int[][] arr;
    int sum;
    Random rand = new Random();

    public Solution(int[][] rects) {
        arr = rects;
        mp = new TreeMap<>();
        sum = 0;

        for (int i = 0; i < rects.length; i++) {
            int[] rect = rects[i];

            sum += (rect[2] - rect[0] + 1) * (rect[3] - rect[1] + 1);

            mp.put(sum, i);
        }
    }

    public int[] pick() {
        int c = mp.ceilingKey(rand.nextInt(sum) + 1);
        int[] rect = arr[mp.get(c)];

        int left = rect[0], right = rect[2], bot = rect[1], top = rect[3];

        return new int[]{left + rand.nextInt(right - left + 1), bot + rand.nextInt(top - bot + 1)};
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(rects);
 * int[] param_1 = obj.pick();
 */
