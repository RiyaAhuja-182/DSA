class Solution {
  public:
    void getPermutations(string &s,int idx, vector<string> &ans){
        if(idx == s.size()){
            ans.push_back({s});
            return;
        }
        set<char> used;
        
        for(int i = idx; i < s.size();i++){
            if (used.count(s[i])) {
                continue;
            }

            used.insert(s[i]);
            
            swap(s[idx], s[i]);
            
            getPermutations(s, idx + 1, ans);
            
            swap(s[idx], s[i]);
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here
        vector<string> ans;
        
        getPermutations(s, 0, ans);
        
        return ans;
        
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna