#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

    const double PI = 3.14159;
    double A,R;
    cin>>R;
    A = PI*(R*R);


    cout<<fixed<<setprecision(4);
    cout<<"A="<<A<<endl;

    return 0;
}