#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cout << "Enter input: ";
    getline(cin, input);

    vector<string> keywords = {"int", "float", "char", "double", "auto", "break", "case", "const",
                               "continue", "default", "do", "else", "enum", "extern", "for", "goto",
                               "if", "long", "register", "return", "short", "signed", "sizeof", "static",
                               "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};

    vector<char> operators = {'+', '-', '*', '/', '='};
    vector<char> symbols = {';', ','};

    istringstream iss(input);
    string word;
    vector<string> identifiers;

    while (iss >> word)
    {
        if (find(keywords.begin(), keywords.end(), word) != keywords.end())
        {
            cout << "Keywords: " << word << ".\n";
        }
        else
        {
            for (char op : operators)
            {
                if (word.find(op) != string::npos)
                {
                    cout << "Operators: " << op << ".\n";
                }
            }
            for (char sym : symbols)
            {
                if (word.find(sym) != string::npos)
                {
                    cout << "Symbols: " << sym << ".\n";
                }
            }
            // Exclude symbols from identifiers
            if (find(symbols.begin(), symbols.end(), word.back()) == symbols.end())
            {
                identifiers.push_back(word);
            }
        }
    }

    cout << "Identifiers: ";
    for (const auto &id : identifiers)
    {
        cout << id << ", ";
    }
    cout << ".\n";

    return 0;
}
