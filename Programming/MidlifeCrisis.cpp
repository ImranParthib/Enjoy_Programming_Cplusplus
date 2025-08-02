#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int H, I, C;
        cin >> H >> I >> C;

        int months = 0;
        double debt = H;
        double interestRate = I / 100.0;

        while (debt > 0) {
            debt += debt * interestRate; // Add interest
            debt -= C; // Subtract monthly payment
            months++;

            if (debt > H) { // If debt increases despite payment
                cout << "Dhananjay cannot buy this house." << endl;
                break;
            }
        }

        if (debt <= 0) {
            cout << months << endl;
        }
    }
    return 0;
}