#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables to store the input values
    double A, B, C, D;

    // Read the input values
    cin >> A >> B;
    cin >> C >> D;

    // Set the desired output format
    cout << fixed << setprecision(6);

    // Print the results in the specified formats
    cout << "A = " << A << ", B = " << B << endl;
    cout << "C = " << C << ", D = " << D << endl;

    cout << "A = " << A << ", B = " << B << endl;
    cout << "C = " << C << ", D = " << D << endl;

    cout << "A = " << A << ", B = " << B << endl;
    cout << "C = " << C << ", D = " << D << endl;

    cout << "A = " << A << ", B = " << B << endl;
    cout << "C = " << C << ", D = " << D << endl;

    cout << "A = " << scientific << A << ", B = " << scientific << B << endl;
    cout << "C = " << scientific << C << ", D = " << scientific << D << endl;

    cout << "A = " << static_cast<int>(A) << ", B = " << static_cast<int>(B) << endl;
    cout << "C = " << static_cast<int>(C) << ", D = " << static_cast<int>(D) << endl;

    return 0;
}
