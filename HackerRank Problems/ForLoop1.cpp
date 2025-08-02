#include <bits/stdc++.h>
using namespace std;

int main()
{
    using namespace std; 
    int x, y;
    cin >> x >> y;
    string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = x; i <= y; i++)
    {
        if (i <= 9)
        {
            cout << numbers[i - 1] << endl;
        }
        else
        {
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}