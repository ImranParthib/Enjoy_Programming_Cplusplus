#include<iostream>
using namespace std;

int main() {
    long long firstNum, lastNum;
    cin >> firstNum >> lastNum;

    long long sum = (lastNum * (lastNum + 1) - firstNum * (firstNum - 1)) / 2;

    cout << sum << endl;
    return 0;
}
