#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class SymbolTable
{
public:
    void addEntry(const string &identifier, const string &operators, const string &digits)
    {
        table.push_back({getNextID(), identifier, operators, digits});
    }

    void displayTable()
    {
        cout << setw(5) << "ID"
             << " | " << setw(20) << "Identifiers"
             << " | " << setw(20) << "Operators"
             << " | " << setw(20) << "Digits" << endl;
        for (const auto &entry : table)
        {
            cout << setw(5) << entry[0] << " | " << setw(20) << entry[1] << " | " << setw(20) << entry[2] << " | " << setw(20) << entry[3] << endl;
        }
    }

    string getNextID()
    {
        return to_string(studentIDDigits[idIndex++ % studentIDDigits.size()]);
    }

private:
    vector<vector<string>> table;
    int idIndex = 0;

    vector<int> studentIDDigits = {2, 1, 1, 1, 5, 3, 9, 6, 4};
};

int main()
{
    SymbolTable symbolTable;

    // Take user input until it exceeds the digits of the student ID
    string studentID = "211-15-3964";
    while (symbolTable.getNextID() != studentID.substr(studentID.length() - 1))
    {
        string identifier, operators, digits;

        cout << "Enter Identifier: ";
        cin >> identifier;

        cout << "Enter Operators: ";
        cin >> operators;

        cout << "Enter Digits: ";
        cin >> digits;

        symbolTable.addEntry(identifier, operators, digits);
    }

    // Display the symbol table
    symbolTable.displayTable();

    return 0;
}
