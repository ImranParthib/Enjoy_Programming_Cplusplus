/**
 *    author:  Imran Parthib
 *    time: June 26, 2025 9:10 PM
 **/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, N;
    cin >> t;
    int countIn = 0, countOut = 0;

    while (t--)
    {
        cin >> N;
        if (N >= 10 && N <= 20)
            countIn++;
        else
            countOut++;
    }

    cout << countIn << " in" << endl;
    cout << countOut << " out" << endl;

    return 0;
}
