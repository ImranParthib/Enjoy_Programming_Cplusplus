#include <bits/stdc++.h>
using namespace std;

int greaterValue(a, b, c, d)
{

    int value = max(max(a, b), max(c, d));
    return value;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int result = greaterValue(a, b, c, d);
    cout << result << endl;
    return 0;
}