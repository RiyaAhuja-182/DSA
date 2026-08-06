class Solution {
public:
    string reverseWords(string s) {
        string result = "";

        int i = s.size() - 1;

        while(i >= 0){
            while(i >= 0 && s[i] == ' '){
                i--;
            }

            if( i < 0) break;

            int end = i;

            while(i >= 0 && s[i] != ' '){
                i--;
            }

            string word = s.substr(i + 1, end - i);

            if(!result.empty()){
                result += " ";
            }

            result += word;
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna