#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a; // Read the number of rows

    vector<vector<int>> arr(a); // Declare a vector of vectors

    // Read the elements for each row
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;         // Read the number of elements in the current row
        arr[i].resize(b); // Resize the current row vector

        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j]; // Read the elements for the current row
        }
    }

    // Print the elements
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; // Add a newline after each row
    }

    return 0;
}
