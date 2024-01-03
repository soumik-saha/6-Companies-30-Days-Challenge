class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // Cyclic Sort
        for(int i=0; i<arr.size();) {
            if(arr[i]!=arr[arr[i]-1]) {
                swap(arr[i], arr[arr[i]-1]);
            } 
            else {
                i++;
            }
        }
        
        int missing = -1, duplicate = -1;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i]!=i+1) {
                duplicate = arr[i];
                missing = i+1;
                break;
            }
        }
        return {duplicate, missing};
    }
};
