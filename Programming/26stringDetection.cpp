#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter something: ";
    getline(cin, input);

    if (!input.empty()) {
        cout << "Input is a string." << endl;
    } else {
        cout << "Input is not a string." << endl;
    }

    return 0;
}
