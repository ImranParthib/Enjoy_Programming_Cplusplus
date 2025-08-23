#include <climits>

class Solution
{
public:
    int reverse(int x)
    {
        long long ans = 0;
        int temp = x;

        while (temp != 0)
        {
            int val = temp % 10;
            temp /= 10;
            ans = ans * 10 + val;

            if (ans > INT_MAX || ans < INT_MIN)
                return 0;
        }

        return (int)ans;
    }
};
