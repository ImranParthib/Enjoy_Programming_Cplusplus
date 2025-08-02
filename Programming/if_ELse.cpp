#include <iostream>
using namespace std;

int main()
{

    int savings;
    cin >> savings;

    if (savings > 5000)
    {
        cout << "rashni";
    }
    else if (savings < 100)
    {
        cout << "Friends";
    }
    else
    {
        cout << "ClassMates";
    }

    return 0;
}