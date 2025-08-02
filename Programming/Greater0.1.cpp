#include <iostream>
using namespace std;

int main()
{
    // This is a program to find the maximum
    cout << "Enter Three Numbers\n";
    int a, b, c;

    cin >> a >> b >> c;
    if (a > b)
    {
        if (b > c)
        {
            cout << "a is the greater number\n";
        }
        else
        {
            cout << "c is the greater number\n";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b is the greater number\n";
        }
        else
        {
            cout << "c is the greater number\n";
        }
    }

    return 0;
}
