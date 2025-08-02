#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x = 0;
    while (t--) {
        string str;
        cin >> str;
        int n = str.length();
        if (str[n - 1] == '+' || str[0] == '+') {
            ++x;
        }
        else {
            --x;
        }
    }
    cout << x << endl;
    return 0;
}