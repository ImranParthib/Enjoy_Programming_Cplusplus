#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << min(min(i, j), min(N - i - 1, N - j - 1));
            }
            cout << endl;
        }
        cout << endl; // Separate test cases by a blank line
    }
    return 0;
}
