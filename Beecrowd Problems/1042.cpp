#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int num1 = 0, num2 = 0, num3 = 0;

    int check1 = 0;
    int check2 = 0;
    int check3 = 0;

    //! To Print First Number

    if (a < b && a < c) {
        num1 = a;
        
    }
    else if (b < c) {
        num2 = b;
        
    }
    else {
        num3 = c;
        
    }

    if (num1 != 0) {
        cout << num1 << endl;
        check1 += 1;

    }
    else if (num2 != 0) {
        cout << num2 << endl;
        check2 += 1;

    }
    else if (num3 != 0) {
        cout << num3 << endl;
        check3 += 1;

    }
    //! To Print Second Number
    
    if (check1 == 1) {
        if (b > c) {
            cout << c << endl;
        }
        else {
            cout << b << endl;
        }
    }
    else if (check2 == 1) {
        if (a > c) {
            cout << c << endl;
        }
        else {
            cout << a << endl;
        }

    }
    else{
        if (a > b) {
            cout << b << endl;
        }
        else {
            cout << a << endl;
        }

    }

    if (a > b && a > c) {
        cout << a << endl;
    }
    else if (b > c ) {
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }

    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}