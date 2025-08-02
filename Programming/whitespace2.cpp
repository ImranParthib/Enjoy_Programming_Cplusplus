#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int n = str.size();

    string result = "";
    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {
            result += str[i];
        }
    }

    cout << result;

    return 0;
}
