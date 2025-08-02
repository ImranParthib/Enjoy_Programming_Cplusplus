#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the numbers" << endl;
    cin >> n;

    int sum = 0;
    for (int counter = 1; counter <= n; counter++)
    {
        sum = sum + counter;
    }

    cout << "total sum : " << sum << endl;

    return 0;
}