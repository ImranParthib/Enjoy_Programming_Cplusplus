#include <iostream>
#include <string>
using namespace std;

bool isSingleLineComment(const string& str) {
    return str.size() >= 2 && str[0] == '/' && str[1] == '/';
}

bool isMultiLineComment(const string& str) {
    return str.size() >= 2 && str[0] == '/' && str[1] == '*';
}

bool isComment(const string& str) {
    return isSingleLineComment(str) || isMultiLineComment(str);
}

int main() {
    string input;

    cout << "Enter a String Here: " << endl;
    getline(cin, input);

    if (isComment(input)) {
        cout << "This is a comment!" << endl;
    } else {
        cout << "This is not a comment!" << endl;
    }

    return 0;
}
