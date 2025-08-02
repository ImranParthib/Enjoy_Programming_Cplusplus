#include <iostream>
using namespace std;

int main()
{
    int n, q, s = 0;
    cin >> n >> q;

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[s] = new int[num];
        for (int j = 0; j < num; j++)
        {
            cin >> arr[s][j];
        }
        s++;
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        // Check if a and b are within valid bounds
        if (a >= 0 && a < n && b >= 0 && b < s)
        {
            cout << arr[a][b] << endl;
        }
        else
        {
            cout << "Invalid indices" << endl;
        }
    }

    // Deallocate memory to avoid memory leaks
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
