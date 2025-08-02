#include<iostream>
using namespace std;

int main() {

    int d1, h1, m1, s1, d2, h2, m2, s2;
    string day;
    
    // Read the first date and time
    cin >> day >> d1;
    cin >> h1 >> day >> m1 >> day >> s1;
    
    // Read the second date and time
    cin >> day >> d2;
    cin >> h2 >> day >> m2 >> day >> s2;

    int d = d2 - d1;
    int h = h2 - h1;
    int m = m2 - m1;
    int s = s2 - s1;

    if (s < 0) {
        s += 60;
        m--;
    }
    if (m < 0) {
        m += 60;
        h--;
    }
    if (h < 0) {
        h += 24;
        d--;
    }

    cout << d << " dia(s)" << endl;
    cout << h << " hora(s)" << endl;
    cout << m << " minuto(s)" << endl;
    cout << s << " segundo(s)" << endl;
    return 0;
}
