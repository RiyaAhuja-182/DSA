class Solution {
public:
    double myPow(double x, int n) {
        long b=n;
        if(b < 0)
        {
            x=1/x;
            b= -b;
        }

        double answer=1;
        while(b > 0)
        {
            if(b % 2 == 1)
                answer *= x;

            b = b / 2;
            x = x * x;
        }
        return answer;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna