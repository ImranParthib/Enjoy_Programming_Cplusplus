#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // create a vector called fvrtNum that will store strings
    vector<int> fvrNum = {1, 2, 5, 7, 11, 15, 17, 23};
    // print vector elements
    cout << "My Favourite Numbers" << endl;
    for (int num : fvrNum)
    {
        cout << num << ",";
    }
    cout << endl;
    cout << endl;
    // create a vector called divisions that will store strings

    vector<string> divisions = {
        "Dhaka",
        "Kushtia",
        "Barishal",
        "Rangpur",
        "Khulna",
        "Sylhet",
        "Chattogram",
        "Rajshahi",
    };
    cout << "Bangladeshi Cities" << endl;

    for (string division : divisions)
    {
        cout << division << ",";
    }
    return 0;
}
