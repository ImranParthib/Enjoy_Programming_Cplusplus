#include<iostream>
using namespace std;

int main() {

    string s;
    cin >> s;

    int lower = 0, upper = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            lower++;
        }
        else {
            upper++;
        }
    }

    if (lower >= upper) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
        }
    }
    else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 'a' + 'A';
            }
        }
    }

    cout << s << endl;
    return 0;

}