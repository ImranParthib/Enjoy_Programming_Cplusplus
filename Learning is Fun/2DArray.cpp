#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numOfRow;
    int numOfColumn;
    cout << "Enter number of Rows:" << endl;
    cin >> numOfRow;
    cout << "Enter the number of Column:" << endl;
    cin >> numOfColumn;
    int A[numOfRow][numOfColumn];
    // int B[][];
    // int C[][];

    cout << "Enter " << numOfRow << '*' << numOfColumn << " Matrix:" << endl;

    for (int i = 0; i < numOfRow; i++)
    {
        cout << "Enter " << i + 1 << " Row " << numOfColumn << " Elements:" << endl;
        for (int j = 0; j < numOfColumn; j++)
        {
            cin >> A[i][j];
        }
    }

    // Showing the A Matrix:
    cout << "A Matrix:" << endl;
    for (int i = 0; i < numOfRow; i++)

    {
        for (int j = 0; j < numOfColumn; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
