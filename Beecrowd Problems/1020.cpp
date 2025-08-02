#include <iostream>
using namespace std;

int main()
{
    int pAge;
    cin >> pAge;
    int pYear = pAge/365;
    int remindAge1 = pAge % 365;
    int pMonth = remindAge1 /30;
    int pDays= remindAge1 % 30;

    cout<<pYear<<endl;
    cout<<pMonth<<endl;
    cout<<pDays<<endl;
    
    return 0;
}