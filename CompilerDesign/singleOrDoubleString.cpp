#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    getline(cin, str);
    n = str.size();

    for (int i = 0; i < n; i++)
    {
        if (i >= 2 && str[i] == '\"')
        {
            cout << "\"Double quoted String \"" << endl;
            break;
        }
        else if (i >= 2 && str[i] == '\'')
        {
            cout << "\'Single quoted String\'" << endl;
            break;
        }
    }

    return 0;
}