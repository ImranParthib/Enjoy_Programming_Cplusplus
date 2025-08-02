#include <iostream>
#include <string>
using namespace std;

using namespace std;

int main()
{
    int number;
    cout << "How Many Cars do You Have?";
    cin >> number;
    cin.ignore();

    string *pCars = new string[number];

    for (int i = 0; i < number;i++){
        cout << "Enter car # " << i + 1 << ": ";
        getline(cin, pCars[i]);
        
    }

    cout << "\n Here is your Garage" << endl;
    cout <<"------------------"<< endl;

    for (int i = 0; i < number; i++)
    {
        cout << pCars[i];
    }

    delete[] pCars;

    return 0;
}