class Solution {
public:
    void getSum(vector<int>& arr, int tar, int idx,vector<int>& combin, vector<vector<int>>& ans) {
       if (tar == 0) {
           ans.push_back(combin);
           return;
       }

       for (int i = idx; i < arr.size(); ++i) {
           if (i > idx && arr[i] == arr[i - 1]) continue;

           if (arr[i] > tar) break;

           combin.push_back(arr[i]);
           getSum(arr, tar - arr[i], i + 1, combin, ans);
           combin.pop_back();
       }
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end()); 
        vector<vector<int>> ans;
        vector<int> combin;

        getSum(arr, target, 0, combin, ans);

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna