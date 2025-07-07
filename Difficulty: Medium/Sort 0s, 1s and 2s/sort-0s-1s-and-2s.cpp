class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        // int n = arr.size();
        // for(int i=0;i<n-1;i++){
        //     int swapped = 0;
        //     for(int j=0;j<n-i-1;j++){
                
        //         if(arr[j]>arr[j+1]) {
        //             swap(arr[j],arr[j+1]);
        //             swapped = 1;
        //         }
        //     }
        //     if(swapped == 0)break;
        // }
        
         int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low++], arr[mid++]);
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high--]);
        }
    }
    }
};