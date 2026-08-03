class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        // code here
        int low = 0;
        int high = arr.size() - 1;\
        int ans = -1;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(arr[mid] == k){
                ans = mid;
                high = mid - 1;
            }
            else if(arr[mid] < k){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna