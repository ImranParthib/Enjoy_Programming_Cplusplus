#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 2; j < n; j++)
        {
            if (a[i] + a[i + 1] == a[j] + a[j - 1])
            {
                cout << "YES" << endl;
                cout << i + 1 << " " << i + 2 << " " << j << " " << j - 1;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}