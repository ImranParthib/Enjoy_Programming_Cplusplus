#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    long long leds;
    while (t--) {
        leds = 0;
        string str;
        cin >> str;
        for (int i = 0; i < str.size();i++) {
            if (str[i] == '1') leds += 2;
            if (str[i] == '2') leds += 5;
            if (str[i] == '3') leds += 5;
            if (str[i] == '4') leds += 4;
            if (str[i] == '5') leds += 5;
            if (str[i] == '6') leds += 6;
            if (str[i] == '7') leds += 3;
            if (str[i] == '8') leds += 7;
            if (str[i] == '9') leds += 6;
            if (str[i] == '0') leds += 6;
        }
        cout << leds<<" leds" << endl;
    }
    return 0;
}