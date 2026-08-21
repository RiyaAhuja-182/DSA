class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int piv = -1;
        int n = arr.size();

        for(int i = n - 2;i >= 0;i--){
            if(arr[i] < arr[i + 1]){
                piv = i;
                break;
            }
        }

        if(piv == -1){
            reverse(arr.begin(), arr.end());
            return;
        }

        for(int i = n - 1;i > piv ;i--){
            if(arr[i] > arr[piv]){
                swap(arr[i], arr[piv]);
                break;
            }
        }

        int i = piv + 1, j = n - 1;
        while(i <= j){
            swap(arr[i++], arr[j--]);
        }

        //reverse(arr.begin() + pivot + i;arr.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna