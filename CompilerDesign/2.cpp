#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

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
        printDashes();
        for (const auto &entry : table)
        {
            cout << setw(5) << entry[0] << setw(20) << entry[1] << setw(20) << entry[2] << setw(20) << entry[3] << endl;
            printDashes();
        }
    }

    void searchEntry(const string &searchIdentifier)
    {
        vector<vector<string>> result;
        for (const auto &entry : table)
        {
            if (entry[1] == searchIdentifier)
            {
                result.push_back(entry);
            }
        }

        if (!result.empty())
        {
            cout << setw(5) << "ID" << setw(20) << "Identifiers" << setw(20) << "Operators" << setw(20) << "Digits" << endl;
            printDashes();
            for (const auto &entry : result)
            {
                cout << setw(5) << entry[0] << setw(20) << entry[1] << setw(20) << entry[2] << setw(20) << entry[3] << endl;
                printDashes();
            }
        }
        else
        {
            cout << "No entries found for identifier '" << searchIdentifier << "'." << endl;
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

    void printDashes()
    {
        cout << setw(5) << setfill('-') << "" << setw(20) << "" << setw(20) << "" << setw(20) << "" << setfill(' ') << endl;
    }
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
    cout << "Symbol Table:" << endl;
    symbolTable.displayTable();

    // Search operation
    string searchIdentifier;
    // cout << "\nEnter an identifier to search: ";
    // cin >> searchIdentifier;
    searchIdentifier = "p";
    cout << "\nSearch Result:" << endl;
    symbolTable.searchEntry(searchIdentifier);

    return 0;
}
