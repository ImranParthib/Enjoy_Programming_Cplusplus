#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str = "DIU_SEDULOUS";
    int n = str.size();
    string result = "";
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '_')
        {
            result += str[i];
        }
    }
    int m = result.length();

    string result2 = "";

    for (int i = 0; i < m; i++)
    {
        bool duplicate = false;
        for (int j = i + 1; j < m; j++)
        {
            if (result[i] == result[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            result2 += result[i];
        }
    }

    cout << result2 << endl;

    return 0;
}
