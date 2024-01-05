string encode(string src)
{     
  //Your code here 
    string res;
    for(int i=0; i<src.size(); i++) {
        res.push_back(src[i]);
        int cnt = 1;
        while(i<src.size() && src[i+1]==src[i]) {
            cnt++;
            i++;
        }
        res += to_string(cnt);
    }
    return res;
}   
