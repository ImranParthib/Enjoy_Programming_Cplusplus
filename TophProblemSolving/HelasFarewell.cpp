#include <iostream>
#include <cctype>
#include <map>
using namespace std;

int main()
{
    string str = "DIU_SEDULOUS";
    int n = str.length();
    string result = "";
    map<char, int> seen;

    for (int i = 0; i < n; i++)
    {
        if (str[i] != '_')
        {
            if ((str[i] == 'D' || str[i] == 'U' || str[i] == 'S') && seen[str[i]] > 0)
            {
                continue;
            }
            result += str[i];
            seen[str[i]]++;
        }
    }

    cout << result.length() << endl;
    cout << result << endl;
    
    return 0;
}