#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int N;
        cin >> N;
        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int count_negative = 0;
        int count_zero = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] < 0)
            {
                count_negative += 1;
            }
            if (A[i] == 0)
            {
                count_zero += 1;
            }
        }
        if (count_zero > 0)
        {
            cout << "0" << endl;
        }
        else if (count_negative % 2 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
    return 0;
}