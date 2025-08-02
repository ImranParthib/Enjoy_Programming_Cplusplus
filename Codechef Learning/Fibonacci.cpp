#include <iostream>
using namespace std;

int main()
{
    long long term1, term2, lastTerm, totalTerm;
    cin >> totalTerm;
    term1 = 0;
    term2 = 1;
    if (totalTerm == 0)
    {
        return 0;
    }
    cout << term1 << "," << term2;

    lastTerm = term1 + term2;
    for (int i = 3; i <= totalTerm; i++)
    {
        cout << "," << lastTerm;
        term1 = term2;
        term2 = lastTerm;
        lastTerm = term1 + term2;
    }
    int nthTerm = 0, count;
    cout << endl;
    cout << "Enter the nth-term to show" << endl;
    cin >> count;
    term1 = 0;
    term2 = 1;
    nthTerm = term1 + term2;

    for (int i = 4; i <= count; i++)
    {
        term1 = term2;
        term2 = nthTerm;
        nthTerm = term1 + term2;
    }
    if (count == 0)
    {
        return 0;
    }
    else
    {
        cout << nthTerm;
    }

    return 0;
}