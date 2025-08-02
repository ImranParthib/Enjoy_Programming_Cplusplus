#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;


    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            two++;
        }
        if (A[i] % 3 == 0) {
            three++;
        }
        if (A[i] % 4 == 0) {
            four++;
        }
        if (A[i] % 5 == 0) {
            five++;
        }

    }
    cout << two << " Multiplo(s) de 2" << endl;
    cout << three << " Multiplo(s) de 3" << endl;
    cout << four << " Multiplo(s) de 4" << endl;
    cout << five << " Multiplo(s) de 5" << endl;
    return 0;
}