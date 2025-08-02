#include<bits/stdc++.h>
using namespace std;



int main() {

    long long firstTerm, secondTerm, lastTerm, totalTerm;
    cin >> totalTerm;
    firstTerm = 0;
    secondTerm = 1;

        if (totalTerm == 0) {
            return 0;
        }
    cout << firstTerm << ',' << secondTerm;

    lastTerm = firstTerm + secondTerm;

    for (int i = 2;i < totalTerm;i++) {
        cout << ',' << lastTerm;
        firstTerm = secondTerm;
        secondTerm = lastTerm;
        lastTerm = firstTerm + secondTerm;
    }
    return 0;

}