#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;
    if (input[0] == 'A' && (input[1] == 'A' || input[1] == 'B') && (input[2] == 'A' || input[2] == 'B' || input[2] == 'C'))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}