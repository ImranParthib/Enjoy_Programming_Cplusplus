#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int sum = 0;
        for (int i = 0; i < n;i++) {
            sum += abs(A[i]);
        }
        cout << sum << endl;
    }

}