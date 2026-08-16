class Solution {
  public:
    bool searchInRow(vector<vector<int>> &mat, int x, int row){
        int n = mat[0].size();
        int st = 0; int end = n - 1;
        
        while(st <= end){
            int mid = st + (end - st )/ 2;
            
             if(x == mat[row][mid]){
                 return true;
             }
             else if(x > mat[row][mid]){
                 st = mid + 1;
             }
             else{
                 end = mid - 1;
             }
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int m = mat.size();
        int n = mat[0].size();
        
        int sR = 0, eR = m - 1;
        
        while(sR <= eR){
            int mR = sR + (eR - sR) / 2;
            
            if(x >= mat[mR][0] && x <= mat[mR][n - 1]){
                return searchInRow(mat, x, mR);
            }
            else if(x >= mat[mR][n- 1]) {
                sR = mR + 1;
            }
            else{
                eR = mR - 1;
            }
            
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna