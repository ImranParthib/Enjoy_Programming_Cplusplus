#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;

    while (n--)
    {
        string day;
        cin >> day;

        switch (day.comapre(day))
        {
        case "Saturday":
            cout << "This is Saturday" << endl;
            break;
        case "Sunday":
            cout << "This is Sunday" << endl;
            break;
        case "Monday":
            cout << "This is Monday" << endl;
            break;
        case "Tuesday":
            cout << "This is Tuesday" << endl;
            break;
        case "Wednesday":
            cout << "This is Wednesday" << endl;
            break;
        case "Thursday":
            cout << "This is Thursday" << endl;
            break;
        case "Friday":
            cout << "This is Friday" << endl;
            break;
        default:
            cout << "Enter a valid day" << endl;
            break;
        }
    }

    return 0;
}
