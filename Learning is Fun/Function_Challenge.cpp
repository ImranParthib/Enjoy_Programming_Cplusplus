#include <bits/stdc++.h>
using namespace std;

string Addition(string firstName, string lastName)
{
    return firstName + lastName;
}
int main()
{

    string firstName = "Imran";
    string lastName = " Parthib";
    string fullName = Addition(firstName, lastName);

    cout << fullName << endl;
    cout << Addition(firstName, lastName) << endl;
    return 0;
}