#include<iostream>
using namespace std;

long long factorial(int n) {

    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        long long fact = 1;
        for (int i = 2; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }

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