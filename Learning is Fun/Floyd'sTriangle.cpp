#include <iostream>
using namespace std;

void printPattern(int row)
{
    int count = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }
}

int main()
{
    int row;
    cin >> row;
    printPattern(row);
    return 0;
}