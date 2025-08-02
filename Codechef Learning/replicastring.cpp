// Update the code below to solve this problem

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        int n = S.length();
        for (int i = 0; i < n; i++)
        {
            cout << S[i];
        }
        cout << endl;
        for (int i = n - 1; i >= 0; i--)
        {
            cout << S[i];
        }
        cout << endl;
    }
    return 0;
}
