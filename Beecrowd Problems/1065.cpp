#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int evenCount = 0;

    // Use separate if statements to count all even numbers
    if (a % 2 == 0) {
        evenCount++;
    }
    if (b % 2 == 0) {
        evenCount++;
    }
    if (c % 2 == 0) {
        evenCount++;
    }
    if (d % 2 == 0) {
        evenCount++;
    }
    if (e % 2 == 0) {
        evenCount++;
    }

    // Corrected output statement
    cout << evenCount << " valores pares" << endl;

    return 0;
}
