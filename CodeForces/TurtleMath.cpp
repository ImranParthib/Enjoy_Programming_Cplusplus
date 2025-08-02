#include <iostream>
using namespace std;

int solve(int* array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];
    
    if (sum % 3 == 0) return 0;

    if ((sum + 1) % 3 == 0) return 1;
    
    for (int i = 0; i < size; i++)
        if ((sum - array[i]) % 3 == 0) return 1;
    
    return 2;
}

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
        cout << solve(A, n) << endl;
    }
    return 0;
}
