// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size()-1;
        if(n<1)return;
        int last = arr[n];
        for(int i=n; i>0; i--){
            arr[i] = arr[i-1];
        }
            arr[0]=last;
        
    }
};