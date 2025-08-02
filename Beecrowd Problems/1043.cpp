#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

     
    if (a + b > c && b + c > a && c + a > b) {
        double peri = a + b + c;
        cout << "Perimetro = " << fixed << setprecision(1) << peri << endl;
    }
    else {
        double area = (a + b) * c / 2; 
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }

    return 0;
}

