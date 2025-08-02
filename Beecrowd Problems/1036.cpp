#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double det;
    double R1, R2;
    det = ((b * b) - (4 * a * c));
    if (det >= 0 && a != 0) {
       
        R1 = (-b + pow(det, 0.5)) / (2 * a);
        R2 = (-b - pow(det, 0.5)) / (2 * a);
        cout <<"R1 = "<< fixed << setprecision(5) << R1 << endl;
        cout << "R2 = "<<fixed << setprecision(5) << R2 << endl;
    }
    else {
        
        cout << "Impossivel calcular" << endl;
    }
    return 0;
}