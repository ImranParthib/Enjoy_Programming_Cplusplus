#include <iostream>
#include <vector>
#include <iomanip>

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
        cout << setw(5) << "ID" << setw(20) << "Identifiers" << setw(20) << "Operators" << setw(20) << "Digits" << endl;
        for (const auto &entry : table)
        {
            cout << setw(5) << entry[0] << setw(20) << entry[1] << setw(20) << entry[2] << setw(20) << entry[3] << endl;
        }
    }

private:
    vector<vector<string>> table;
    int idIndex = 0;

    string getNextID()
    {
        return to_string(studentIDDigits[idIndex++ % studentIDDigits.size()]);
    }

    vector<int> studentIDDigits = {2, 1, 1, 1, 5, 3, 9, 6, 4};
};

int main()
{
    SymbolTable symbolTable;

    // Input data from users
    symbolTable.addEntry("a", "=,+", "10,20");
    symbolTable.addEntry("b", "=", "20");
    symbolTable.addEntry("c", "=,/", "30,3");
    symbolTable.addEntry("f", "=,+", "14,12");
    symbolTable.addEntry("k", "=", "9");
    symbolTable.addEntry("e", "+", "30");
    symbolTable.addEntry("i", "=,*", "25,9");
    symbolTable.addEntry("m", ">", "90");
    symbolTable.addEntry("p", "<,+", "100,16");

    // Display the symbol table
    symbolTable.displayTable();

    return 0;
}
