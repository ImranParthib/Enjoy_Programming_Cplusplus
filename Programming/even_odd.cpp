#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a Number" << endl;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "The Number is Even";
    }
    else
    {
        cout << "The Number is Odd";
    }
    return 0;
}