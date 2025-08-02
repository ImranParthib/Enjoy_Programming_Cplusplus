#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int n = str.size();
    string a, b, c;

    // for (int i = 0; i < n; i++)
    // {
    //     if (str[i] == '=')
    //     {
    //         cout << "'=' Operator Found" << endl;
    //     }
    //     else if (str[i] != '=')
    //     {
    //         cout << "Operator not Found" << endl;
    //         break;
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '=')
        {
            a += str[i];
            break;
        }
        cout << a << endl;
    }
    return 0;
}
