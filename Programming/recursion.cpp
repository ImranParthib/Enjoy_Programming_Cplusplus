#include<iostream>
using namespace std;
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }


}
int main() {
    int a;
    cin >> a;
    int result = factorial(a);
    cout << "Factorial Of the Num: " << result << endl;
    return 0;
}
