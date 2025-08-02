#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int maximum = max({a, b, c});

        if (a == b && b == c)
        {
            if (n % 3 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        else
        {
            if (maximum == a)
            {
                n -= (a - b);
                n -= (a - c);
            }
            if (maximum == b)
            {
                n -= (b - a);
                n -= (b - c);
            }
            if (maximum == c)
            {
                n -= (c - a);
                n -= (c - b);
            }
            if (n < 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                if (n % 3 == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}