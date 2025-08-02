#include<iostream>
using namespace std;

int main() {
    int totalTerm;
    cin >> totalTerm;

    int firstTerm = 0, secondTerm = 1, nextTerm;

    cout << firstTerm << " " << secondTerm;

    for (int i = 2; i < totalTerm; i++) {
        nextTerm = firstTerm + secondTerm;
        cout << " " << nextTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    cout << endl;

    return 0;
}
