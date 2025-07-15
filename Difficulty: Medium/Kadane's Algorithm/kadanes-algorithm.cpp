class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int currsum = 0;
        int maxsum = INT_MIN;
        for(int st=0; st<arr.size(); st++){
            
                currsum += arr[st];
                maxsum = max(currsum, maxsum);
                if(currsum<0){
                    currsum = 0;
                }
            
        }
        return maxsum;
    }
};