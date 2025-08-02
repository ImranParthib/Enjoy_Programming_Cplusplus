#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    const double Pi = 3.14159;
    double a, b, c;
    double Tri, Cir, Trap, Quad, Ret;
    cin >> a >> b >> c;

    Tri = (a * c) / 2;
    Cir = c * c * Pi;
    Trap = ((a + b) / 2) * c;
    Quad = b * b;
    Ret = a * b;
  
    cout << "TRIANGULO: " << fixed << setprecision(3) << Tri << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << Cir << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << Trap << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << Quad << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << Ret << endl;
    return 0;
}