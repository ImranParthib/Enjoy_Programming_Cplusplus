#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int n = str.size();

    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            cout << i + 1 << ", ";
        }
    }

    return 0;
}
