#include <iostream>
#include <string>
using namespace std;

int main()
{
    string date;
    cin >> date;

    // Extract day, month, and year from the input string
    string day = date.substr(0, 2);
    string month = date.substr(3, 2);
    string year = date.substr(6, 2);

    // Print in MM/DD/YY format
    cout << month << "/" << day << "/" << year << endl;

    // Print in YY/MM/DD format
    cout << year << "/" << month << "/" << day << endl;

    // Print in DD-MM-YY format
    cout << day << "/" << month << "/" << year << endl;

    return 0;
}
