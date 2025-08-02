/**
 *    author:  Imran Parthib
 *    time: June 26, 2025 9:52 PM
 **/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i < 10000; i++)
    {
        if (i % N == 2)
        {
            cout << i << endl;
        }
    }

    return 0;
}
