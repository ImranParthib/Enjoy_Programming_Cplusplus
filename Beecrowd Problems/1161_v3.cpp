#include <iostream>
#include <vector>
using namespace std;

vector<long long> factorialMemo(21, -1);

long long factorial(int n) {
    if (factorialMemo[n] != -1) {
        return factorialMemo[n];
    }
    if (n == 0 || n == 1) {
        return factorialMemo[n] = 1;
    }
    return factorialMemo[n] = n * factorial(n - 1);
}

int main() {
    int m, n;
    while (cin >> m >> n) {
        long long fact_m = factorial(m);
        long long fact_n = factorial(n);
        long long factSum = fact_m + fact_n;
        cout << factSum << endl;
    }
    return 0;
}
