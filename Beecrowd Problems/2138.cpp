#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string n;

    while (cin >> n) {
        vector<int> freq(10, 0);

        // Count the frequency of each digit
        for (char digit : n) {
            freq[digit - '0']++;
        }

        // Find the most frequent digit
        int max_freq = 0;
        int most_frequent_digit = 0;
        for (int i = 0; i < 10; i++) {
            if (freq[i] > max_freq || (freq[i] == max_freq && i > most_frequent_digit)) {
                max_freq = freq[i];
                most_frequent_digit = i;
            }
        }

        // Output the most frequent digit
        cout << most_frequent_digit << endl;
    }

    return 0;
}