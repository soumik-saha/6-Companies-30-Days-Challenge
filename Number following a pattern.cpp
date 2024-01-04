class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        int n = S.size();
        string res = "";
        for(int i=1; i<=n+1; i++) {
            res+=to_string(i);
        }
        
        for(int i=0; i<n; i++) {
            if(S[i]=='I')
                continue;
            
            int k = i;
            int cnt = 1;
            while(i<n && S[i]=='D') {
                i++;
                cnt++;
            }
            
            reverse(res.begin()+k, res.begin()+k+cnt);
        }
        
        return res;
    }
};
