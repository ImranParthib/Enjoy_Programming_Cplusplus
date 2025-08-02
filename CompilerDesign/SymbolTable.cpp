#include <bits/stdc++.h>
using namespace std;

void displayTable(const vector<string> &table)
{
    cout << "ID\tIdentifier\n";
    for (size_t i = 0; i < table.size(); ++i)
    {
        cout << i << "\t" << table[i] << "\n";
    }
}

void insertIdentifier(vector<string> &table, const string &identifier)
{
    table.push_back(identifier);
}

void deleteIdentifier(vector<string> &table, const string &identifier)
{#include <bits/stdc++.h>
using namespace std;

void displayTable(const vector<string> &table)
{
    cout << "ID\tIdentifier\n";
    for (size_t i = 0; i < table.size(); ++i)
    {
        cout << i << "\t" << table[i] << "\n";
    }
}

void insertIdentifier(vector<string> &table, const string &identifier)
{
    table.push_back(identifier);
}

void deleteIdentifier(vector<string> &table, const string &identifier)
{
    auto it = find(table.begin(), table.end(), identifier);
    if (it != table.end())
    {
        table.erase(it);
        cout << "The item '" << identifier << "' is removed from the symbol table.\n";
    }
    else
    {
        cout << "The item '" << identifier << "' is not found in the symbol table.\n";
    }
}

void searchIdentifier(const vector<string> &table, const string &identifier)
{
    auto it = find(table.begin(), table.end(), identifier);
    if (it != table.end())
    {
        size_t index = distance(table.begin(), it);
        cout << "The item '" << identifier << "' found in index: " << index << ".\n";
    }
    else
    {
        cout << "The item '" << identifier << "' not found in the symbol table.\n";
    }
}

int main()
{
    vector<string> symbolTable;

    while (true)
    {
        cout << "\n1. Insert\n2. Delete\n3. Search\n4. Display Table\n5. Exit\n";
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string identifier;
            cout << "Enter an identifier: ";
            cin >> identifier;
            insertIdentifier(symbolTable, identifier);
            break;
        }
        case 2:
        {
            string identifier;
            cout << "Enter an identifier to remove: ";
            cin >> identifier;
            deleteIdentifier(symbolTable, identifier);
            break;
        }
        case 3:
        {
            string identifier;
            cout << "Enter an identifier to search: ";
            cin >> identifier;
            searchIdentifier(symbolTable, identifier);
            break;
        }
        case 4:
            displayTable(symbolTable);
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}

    auto it = find(table.begin(), table.end(), identifier);
    if (it != table.end())
    {
        table.erase(it);
        cout << "The item '" << identifier << "' is removed from the symbol table.\n";
    }
    else
    {
        cout << "The item '" << identifier << "' is not found in the symbol table.\n";
    }
}

void searchIdentifier(const vector<string> &table, const string &identifier)
{
    auto it = find(table.begin(), table.end(), identifier);
    if (it != table.end())
    {
        size_t index = distance(table.begin(), it);
        cout << "The item '" << identifier << "' found in index: " << index << ".\n";
    }
    else
    {
        cout << "The item '" << identifier << "' not found in the symbol table.\n";
    }
}

int main()
{
    vector<string> symbolTable;

    while (true)
    {
        cout << "\n1. Insert\n2. Delete\n3. Search\n4. Display Table\n5. Exit\n";
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string identifier;
            cout << "Enter an identifier: ";
            cin >> identifier;
            insertIdentifier(symbolTable, identifier);
            break;
        }
        case 2:
        {
            string identifier;
            cout << "Enter an identifier to remove: ";
            cin >> identifier;
            deleteIdentifier(symbolTable, identifier);
            break;
        }
        case 3:
        {
            string identifier;
            cout << "Enter an identifier to search: ";
            cin >> identifier;
            searchIdentifier(symbolTable, identifier);
            break;
        }
        case 4:
            displayTable(symbolTable);
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}
