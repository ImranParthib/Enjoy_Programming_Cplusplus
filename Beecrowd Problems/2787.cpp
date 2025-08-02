#include<iostream>
using namespace std;

int main() {
    int row, column;
    cin >> row >> column;
    if (row % 2 == 0) {
        if (column % 2 == 0) {
            cout << "1" << endl;
        }
        else {
            cout << "0" << endl;
        }

    }
    else {
        if (column % 2 == 0) {
            cout << "0" << endl;
        }
        else {
            cout << "1" << endl;
        }

    }
    return 0;
}