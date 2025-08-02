#include<iostream>
using namespace std;

int main() {
    int m, n, sum;
    while (true) {
        cin >> m >> n;
        if (m <= 0 || n <= 0) {
            break;
        }
        sum = 0;
        if (m > n) {
            for (int i = n; i <= m; i++) {
                cout << i << " ";
                sum += i;
            }
        }
        else {
            for (int i = m; i <= n; i++) {
                cout << i << " ";
                sum += i;
            }
        }
        cout << "Sum=" << sum << endl;
    }

    return 0;
}