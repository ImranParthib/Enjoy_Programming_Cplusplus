#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "DIU_SEDULOUS";

    // Create a new string to store the result without duplicates
    string result = "";
    int m = str.length();
    for (int i = 0; i < m; i++)
    {
        if (str[i] != '_')
        {
            result += str[i];
        }
    }
    string result2 = "";
    int n = result.length();
    // Loop through each character in the str string
    for (int i = 0; i < n; ++i)
    {
        char currentChar = result[i];
        bool isDuplicate = false;

        // Check if the character is already in the result string
        int l = result2.length();
        // Control shift L
        for (int j = 0; j < l; ++j)
        {
            if (result2[j] == currentChar)
            {
                isDuplicate = true;
                break;
            }
        }

        // If not a duplicate, add it to the result string
        if (!isDuplicate)
        {
            result2 += currentChar;
        }
    }

    // Output the string without duplicates
    cout << "String without duplicates: " << result2 << endl;

    return 0;
}
