#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        // 1st case
        if (x1 < x2 && y1 == y2 && y1 == 0 && y2 == 0) {
            cout << "YES" << endl;
        }
        // 2nd case
        else if (x1 < x2 && y1 == y2 && x1<y1 && x2>y2) {
            cout << "NO" << endl;
        }
        // 3rd case
        else if (x1 < x2 && y1 < y2 && x1 < y1 && x2 < y2) {
            cout << "YES" << endl;
        }
        // 4th case
        else if (x1 < x2 && y1 < y2 && x1<y1 && x2>y2) {
            cout << "NO" << endl;
        }
        // 5th case
        else if (x1 == x2 && y1 == y2 && x1 < y1 && x2 < y2) {
            cout << "YES" << endl;
        }
        // 6th case
        else if (x1 < x2 && y1 < y2 && x1>y1 && x2>y2) {
            cout << "YES" << endl;
        }
    }

    return 0;
}