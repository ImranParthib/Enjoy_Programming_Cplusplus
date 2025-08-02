#include<iostream>
using namespace std;

int main() {

    int t, n;
    cin >> t;  // Read the number of test cases
    while (t--) {
        cin >> n;  // Read each test case number

        if (n == 0) {
            cout << "NULL" << endl;
        }
        else if (n % 2 == 0) {  // Even number
            if (n > 0) {
                cout << "EVEN POSITIVE" << endl;
            }
            else {
                cout << "EVEN NEGATIVE" << endl;
            }
        }
        else {  // Odd number
            if (n > 0) {
                cout << "ODD POSITIVE" << endl;
            }
            else {
                cout << "ODD NEGATIVE" << endl;
            }
        }
    }

    return 0;
}
