#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter Three Number\n";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "The Greater Number is : " << a << endl;
        }
        else
        {
            cout << "The Greater Number is : " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "The Greater Number is : " << b << endl;
        }
        else
        {
            cout << "The Greater Number is : " << c << endl;
        }
    }

    return 0;
}