#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    n = 50;
    for (i = 0; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }

    for (i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}