#include <iostream>
using namespace std;

int main() {
    int num;
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    // Read 5 numbers and update counts
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        if (num % 2 == 0) evenCount++;
        else oddCount++;
        if (num > 0) positiveCount++;
        else if (num < 0) negativeCount++;
    }

    cout << evenCount << " valor(es) par(es)\n";
    cout << oddCount << " valor(es) impar(es)\n";
    cout << positiveCount << " valor(es) positivo(s)\n";
    cout << negativeCount << " valor(es) negativo(s)\n";
    return 0;
}
