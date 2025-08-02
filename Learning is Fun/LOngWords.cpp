#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, i;
    cin >> t;

    for (i = 0; i <= t; i++)
    {
        int n;
        string str;
        getline(cin, str);
        string result;
        n = str.size();

        if (n > 10)
        {
            result = str[0] + to_string(n - 2) + str[n - 1];
            cout << result << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
    return 0;
}