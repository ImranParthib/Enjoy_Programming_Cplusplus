#include<iostream>
using namespace std;
long factorial(int f) {
    if (f == 0 || f == 1) {
        return 1;
    }
    else {
        return f * factorial(f - 1);
    }
}
int main() {
    int n;
    cin >> n;
    long result = factorial(n);
    cout << result << endl;
    return 0;
}