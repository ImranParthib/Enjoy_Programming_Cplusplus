/**
 *    author:  Imran Parthib
 *    time: June 26, 2025 9:45 PM
 **/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "^" << 2 << " = " << i * i << endl;
        }
    }
    return 0;
}
