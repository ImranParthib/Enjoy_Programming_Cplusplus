#include<iostream>
using namespace std;

int main() {
    int m, n;
    while (cin >> m >> n) {
        long long fact_n;
        if (n == 0 || n == 1) {
            fact_n = 1;
        }
        else {
            long long fact = 1;
            for (int i = 2; i <= n; i++) {
                fact *= i;
            }
            fact_n = fact;
        }
        long long fact_m;
        if (m == 0 || m == 1) {
            fact_m = 1;
        }
        else {
            long long fact = 1;
            for (int i = 2; i <= m; i++) {
                fact *= i;
            }
            fact_m = fact;
        }

        cout << fact_n + fact_m << endl;
    }
    return 0;
}