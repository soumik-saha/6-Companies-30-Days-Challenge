class DataStream {
public:
    int val, kmax, valCnt = 0;

    DataStream(int value, int k) {
        val = value;
        kmax = k;
    }
    
    bool consec(int num) {
        if(num == val) {
            valCnt++;
        }
        else {
            valCnt = 0;
        }
        return valCnt >= kmax;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
