#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int A[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> A[i];
        }
        int team1 = 0;
        int team2 = 0;
        for (int i = 0; i <= 10; i += 2)
        {
            if (A[i] == 1)
            {
                team1++;
            }
        }
        for (int i = 1; i <= 10; i += 2)
        {
            if (A[i] == 1)
            {
                team2++;
            }
        }

        if (team1 > team2)
        {
            cout << "1" << endl;
        }
        else if (team2 > team1)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}