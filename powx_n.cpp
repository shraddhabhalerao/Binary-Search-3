// Time : O(log n)
// Space: O(1)

class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
        long int y = n;
        if(n < 0)
        {
            x = 1/x;
            y = -y;
        }

        while(y != 0)
        {
            if(y%2 == 1)
            {
                result = result * x;
            }
            x = x*x;
            y = y/2;
        }

        return result;
    }
};