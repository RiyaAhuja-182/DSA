class Solution {
public:
    void getPermutations(vector<int>& nums, int idx, vector<vector<int>> &ans){
        // base case
        if(idx == nums.size()){
            ans.push_back({nums});
            return;
        }

        for(int i = idx; i < nums.size();i++){

            swap(nums[idx], nums[i]);

            getPermutations(nums, idx + 1,ans);

            swap(nums[idx], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        getPermutations(nums, 0, ans);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna