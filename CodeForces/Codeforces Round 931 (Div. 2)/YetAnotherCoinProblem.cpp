#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> coins = { 1, 3, 6, 10, 15 };

    while (t--) {
        int n;
        cin >> n;

        int count = 0;
        int i = coins.size() - 1;

        while (n > 0) {
            if (coins[i] <= n) {
                int q = n / coins[i];
                count += q;
                n -= q * coins[i];
            }
            i--;
        }

        cout << count << endl;
    }

    return 0;
}
