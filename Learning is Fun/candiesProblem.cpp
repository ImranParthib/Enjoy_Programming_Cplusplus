#include <iostream>
using namespace std;

int main()
{

    

    int i, n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int halfN = n / 2;
        int count = 0;
        for (i = n - 1; i > 0; i--)
        {
            if (i > halfN)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}