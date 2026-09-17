class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int first = -1;
        int last = -1;
        
        while(low <= high){
            int mid = low  + (high - low) / 2;

            if(target == nums[mid]){
                first = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        low = 0;
        high = nums.size() - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                last = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return {first, last};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna