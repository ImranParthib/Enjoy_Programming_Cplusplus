#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Access a Vector

    vector<string> friends = {"Raman", "Topu", "Asif", "Naim"};
    cout << friends[0] << endl;

    // new friend
    friends.push_back("Anas");
    // Let's meet all friends
    for (string frnd : friends)
    {
        cout << frnd << ",";
    }
    cout << "\n\n";

    // replace a friend
    friends[3] = "Imran";
    cout << friends[3] << endl;

    // get the first friend
    cout << friends.front() << ",";

    // get the last friend
    cout << friends.back();
    cout << "\n\n";
    //  create a vector called fvrtNum that will store strings
    vector<int>
        fvrNum = {1, 2, 5, 7, 11, 15, 17, 23};
    // print vector elements
    cout << "My Favourite Numbers" << endl;
    for (int num : fvrNum)
    {
        cout << num << ",";
    }
    cout << "\n\n";
    // create a vector called divisions that will store strings

    vector<string>
        divisions = {
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

    cout << endl;

    // to get specific elements we can use
    // at vs or to access vector elements
    // safer to sue at
    cout << divisions.at(2) << endl;

    // to find how many elements vector has
    cout << divisions.size() << endl;

    // Check if a Vector is Empty

    cout << divisions.empty() << endl;

    // Loop Through a Vector

    // Classic for loop

    cout << "Classic For Loop" << endl;
    for (int i = 0; i < divisions.size(); i++)
    {
        cout << divisions[i] << ",";
    }
    cout << endl;

    // for-each loop and Range-based for loop
    cout << "For-Each Loop" << endl;
    for (string divsion : divisions)
    {
        cout << divsion << ",";
    }

    cout << endl;

    cout << "Range-based for loop" << endl;
    for (const auto &divs : divisions)
    {
        cout << divs << ",";
    }

    // Iterator with for loop
    // Iterator with while loop
    // for_each with lambda
    // C++ 20 ranges

    return 0;
}
