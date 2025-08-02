#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    //str = "int  function(int a)";
    int n = str.size();

    int m;
    string result = "";

    for (int i = 0; i < n; i++)
    {
        if (str[n - 1] == ')')
        {
            if (str[0] == 'i' && str[1] == 'n' && str[2] == 't')
            {
                cout << "Function type: Valid" << endl;
                cout << "return type: int" << endl;
                break;
            }
            else if (str[0] == 'v' && str[1] == 'o' && str[2] == 'i' && str[3] == 'd')
            {
                cout << "Function type: Valid" << endl;
                cout << "Return type: void" << endl;
                break;
            }
            else
            {
                cout << "Function type: Valid" << endl;
                cout << "Return type: void" << endl;
                break;
            }
        }
        else
        {
            cout << "Error Found" << endl;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
        {
            m = i;
        }
    }

    for (int i = m + 1; i < n - 1; i++)
    {
        result += str[i];
    }
    if (str[m] == '(' && str[n - 1] == ')' && str[m + 1] != ')')
    {
        cout << "Parameters:" << result << endl;
    }
    

    return 0;
}