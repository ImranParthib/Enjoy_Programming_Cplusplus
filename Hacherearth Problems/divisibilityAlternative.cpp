#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int num[n];

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    if (n > 0 && num[n - 1] % 10 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}