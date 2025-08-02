#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, rem = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        rem = arr[i] % 10;
    }

    if (rem % 10 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}