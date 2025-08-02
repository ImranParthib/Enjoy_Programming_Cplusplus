/*
Author: Imran Parthib
Date: 15.07.2025 Time: 12:00
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    float a, b, c;

    while (t--)
    {
        float weightSum = 0;
        cin >> a >> b >> c;
        weightSum = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);
        cout << fixed << setprecision(1) << weightSum << endl;
    }
    return 0;
}