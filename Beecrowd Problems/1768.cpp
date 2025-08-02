#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        // Check if N is odd
        if (N % 2 == 0) {
            continue; // Skip even numbers
        }

        // Print the bottom part of the tree
        int spaces = N / 2;
        for (int i = 1; i <= N; i += 2) {
            cout << string(spaces, ' ') << string(i, '*') << endl;
            spaces--;
        }

        // Print the trunk of the tree
        cout << endl;
        cout << string((N - 3) / 2, ' ') << " *" << endl;
        cout << string((N - 3) / 2, ' ') << "***" << endl;
        cout << endl; // Print a blank line after each tree
    }
    return 0;
}
