#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int num1, num2, num3;

    // Find the smallest number
    if (a <= b && a <= c) {
        num1 = a;
        if (b <= c) {
            num2 = b;
            num3 = c;
        }
        else {
            num2 = c;
            num3 = b;
        }
    }
    else if (b <= a && b <= c) {
        num1 = b;
        if (a <= c) {
            num2 = a;
            num3 = c;
        }
        else {
            num2 = c;
            num3 = a;
        }
    }
    else {
        num1 = c;
        if (a <= b) {
            num2 = a;
            num3 = b;
        }
        else {
            num2 = b;
            num3 = a;
        }
    }

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
