#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B;
    
    cin>>A>>B;

    double weightedAverage = (A * 3.5 + B * 7.5) / (3.5 + 7.5);

    cout << fixed << setprecision(5);  
    cout << "MEDIA = " << weightedAverage << endl;

    return 0;
    
}
