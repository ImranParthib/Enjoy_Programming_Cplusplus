#include<iostream>
using namespace std;

int main() {

    int x, y;
    cin >> x >> y;

    // Ensure x is the smaller value and y is the larger value
    if (x > y) {
        swap(x, y);
    }

    // Loop through the range between x and y, exclusive of y
    for (int i = x + 1; i < y; i++) {
        int remainder = i % 5;
        if (remainder == 2 || remainder == 3) {
            cout << i << endl;
        }
    }

    return 0;
}
