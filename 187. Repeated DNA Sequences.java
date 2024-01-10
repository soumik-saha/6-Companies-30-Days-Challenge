class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
        List<String> res = new ArrayList<>();
        if(s.length()<10)
            return res;
        
        HashMap<String, Integer> freq = new HashMap<>();
        for(int i=0; i<s.length()-9; i++) {
            String dna = s.substring(i, i+10);
            freq.put(dna, freq.getOrDefault(dna, 0)+1);
        }

        for(Map.Entry<String, Integer> it : freq.entrySet()) {
            if(it.getValue()>=2)
                res.add(it.getKey());
        }

        return res;
    }
}
