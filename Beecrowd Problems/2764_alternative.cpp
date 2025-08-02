#include <iostream>
#include <string>
using namespace std;

int main()
{
    string date;

    while (cin >> date)
    {
        // Extract day, month, and year from the input string
        int day, month, year;
        sscanf(date.c_str(), "%d/%d/%d", &day, &month, &year);

        // Print in MM/DD/YY format
        cout << month << "/" << day << "/" << year << endl;

        // Print in YY/MM/DD format
        cout << year << "/" << month << "/" << day << endl;

        // Print in DD-MM-YY format
        cout << day << "/" << month << "/" << year << endl;
    }

    return 0;
}
