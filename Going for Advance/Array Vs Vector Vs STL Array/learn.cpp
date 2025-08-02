#include<iostream>
#include<vector>
using namespace std;

int main() {
    string myArray[4] = { "apple","banana","Kiwi","mango" };
    cout << myArray[2] << endl;

    vector<string> stuff = { "apple","banana","Kiwi","mango" };
    vector<string> things = stuff;
    cout << "Size of stuff vector: " << stuff.size() << endl;
    cout << "Size of things vector: " << things.size() << endl;

     

}