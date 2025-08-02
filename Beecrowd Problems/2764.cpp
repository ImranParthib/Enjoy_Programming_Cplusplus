#include <iostream>
#include <string>
using namespace std;

int main()
{
    string date;
    cin >> date;

    string day = date.substr(0, 2);
    string month = date.substr(3, 2);
    string year = date.substr(6, 2);

    cout << month << "/" << day << "/" << year << endl;
    cout << year << "/" << month << "/" << day << endl;
    cout << day << "-" << month << "-" << year << endl;

    return 0;
}