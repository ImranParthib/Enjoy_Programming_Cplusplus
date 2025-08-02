#include<iostream>
using namespace std;

int main() {
    int myScore[] = { 23,8,90,7,67,89 ,3 };
    int n = sizeof(myScore) / sizeof(int);
    cout << n << endl;
    int lowestValue = myScore[0];
    int highestValue = myScore[0];

    for (int i = 0; i < n; i++) {
        if (myScore[i] < lowestValue) {
            lowestValue = myScore[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (myScore[i] > highestValue) {
            highestValue = myScore[i];
        }
    }

    cout << lowestValue << endl;
    cout << highestValue << endl;

    return 0;
}