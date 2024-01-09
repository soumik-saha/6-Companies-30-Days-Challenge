class Solution {
    public String getHint(String secret, String guess) {
        int n = secret.length();
        int bulls = 0, cows = 0;
        int[] s = new int[10];
        int[] g = new int[10];

        for (int i = 0; i < n; i++) {
            if (secret.charAt(i) == guess.charAt(i)) {
                bulls += 1;
            } else {
                s[Character.getNumericValue(secret.charAt(i))] += 1;
                g[Character.getNumericValue(guess.charAt(i))] += 1;
            }
        }

        for (int i = 0; i < 10; i++) {
            cows += Math.min(s[i], g[i]);
        }

        return bulls + "A" + cows + "B";
    }
}
