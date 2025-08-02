#include<bits/stdc++.h>
using namespace std;

int main(){
    double base, height, hypotenuse;
    cin >> base >> height;

    hypotenuse = sqrt((base * base) + (height * height));
    cout <<fixed <<setprecision (2) << hypotenuse << endl;
    return 0;
}