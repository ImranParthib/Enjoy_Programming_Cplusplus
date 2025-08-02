#include<iostream>
using namespace std;
int summation(int num) {
    if (num <= 0) {
        return 0;
    }
    else {
        return num + summation(num - 1);
    }
}
int main() {
    cout << summation(5);
    return 0;
}