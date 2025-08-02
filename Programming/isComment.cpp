#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100];

    cout << "Enter a String Here: " << endl;
    cin.getline(a, 100);

    int l = 0, i, j, c = 0;

    l = strlen(a);/

    for (i = 0; i < l; i++)
    {
        if (a[i] == '/' && a[i + 1] == '/')
        {
            cout << "\nThis is a Single Line Comment!\n";
            c++;
            break;  
        }
        else if (a[i] == '/' && a[i + 1] == '*')
        {
            for (j = i + 2; j < l - 1; j++) 
            {
                if (a[j] == '*' && a[j + 1] == '/')
                {
                    cout << "\nThis is a Multi-Line Comment!\n" << endl;
                    c++;
                    break;
                }
            }
        }
    }

    if (c == 0) {
        cout << "\nThis is not a Comment!\n" << endl;
    }

    return 0;
}
