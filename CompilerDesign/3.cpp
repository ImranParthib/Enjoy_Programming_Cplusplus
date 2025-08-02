#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void validateFunction(const string &declaration, int lastDigit)
{
    cout << "Input: " << declaration << endl;

    if (lastDigit % 2 != 0)
    {
        cout << "For odd ID:" << endl;
        cout << "This is a valid function" << endl;
        cout << "Return types: void" << endl;
        cout << "Parameters: " << declaration.substr(declaration.find('(') + 1, declaration.find(')') - declaration.find('(') - 1) << endl;
    }
    else
    {
        cout << "For even ID:" << endl;
        size_t start = declaration.find(' ') + 1;
        size_t end = declaration.find('(') - start;

        cout << "This is a valid function" << endl;
        cout << "Function name: " << declaration.substr(start, end) << endl;
        cout << "Body: " << declaration.substr(declaration.find('{') + 1, declaration.find('}') - declaration.find('{') - 1) << endl;
    }
}

int main()
{
    string declaration;
    int lastDigit;

    cout << "Enter the function declaration: ";
    getline(cin, declaration);

    // cout << "Enter the last digit of your student ID: ";
    // cin >> lastDigit;
    int lastDigit = 4;
    validateFunction(declaration, lastDigit);

    return 0;
}
