#include <iostream>
using namespace std;
int main()
{

    int pAge, years, months, days;

    cin >> pAge;

    years = (pAge / 365);

    int remainingAge = (pAge % 365);
    months = remainingAge / 30;
    days = remainingAge % 30;

    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

    return 0;
}
