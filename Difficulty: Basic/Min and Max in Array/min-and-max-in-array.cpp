// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int n = *min_element(arr.begin(),arr.end());
        int m = *max_element(arr.begin(),arr.end());
        
        return {n ,m};
    }
};