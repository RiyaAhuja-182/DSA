class Solution {
public:
    vector<int> findIndex(vector<int>& arr, int key) {
        int first = -1, last = -1;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == key) {
                first = i;
                break;
            }
        }

        if (first != -1) {
            for (int i = arr.size() - 1; i >= 0; i--) {
                if (arr[i] == key) {
                    last = i;
                    break;
                }
            }
        }

        return {first, last};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna