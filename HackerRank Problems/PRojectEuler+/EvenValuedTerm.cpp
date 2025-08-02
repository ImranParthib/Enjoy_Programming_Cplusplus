#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long a = 1, b = 2, sum = 0;
        while (a <= n)
        {
            if (a % 2 == 0)
            {
                sum += a;
            }
            long long temp = a;
            a = b;
            b = temp + b;
        }

        cout << sum << endl;
    }

    return 0;
}
