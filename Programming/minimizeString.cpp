#include <iostream>
using namespace std;

int main()
{

    int i = 0;
    string str = "aaabc";
    int n = str.size();
    string result = "";

    for (i = 0; i < n; i++)
    {
        if (str[i] != str[i + 1])
        {
            result += str[i];
        }
        cout << result.size();
    }
    return 0;
}
