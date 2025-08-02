#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_set>

using namespace std;

// Function to check if a string is a keyword
bool isKeyword(const string &word)
{
    unordered_set<string> keywords = {
        "alignas", "alignof", "and", "and_eq", "asm", "atomic_cancel", "atomic_commit",
        "atomic_noexcept", "auto", "bitand", "bitor", "bool", "break", "case", "catch",
        "char", "char8_t", "char16_t", "char32_t", "class", "compl", "concept", "const",
        "consteval", "constexpr", "const_cast", "continue", "co_await", "co_return", "co_yield",
        "decltype", "default", "delete", "do", "double", "dynamic_cast", "else", "enum", "explicit",
        "export", "extern", "false", "float", "for", "friend", "goto", "if", "import", "inline",
        "int", "long", "module", "mutable", "namespace", "new", "noexcept", "not", "not_eq", "nullptr",
        "operator", "or", "or_eq", "private", "protected", "public", "reflexpr", "register", "reinterpret_cast",
        "requires", "return", "short", "signed", "sizeof", "static", "static_assert", "static_cast", "struct",
        "switch", "synchronized", "template", "this", "thread_local", "throw", "true", "try", "typedef", "typeid",
        "typename", "union", "unsigned", "using", "virtual", "void", "volatile", "wchar_t", "while", "xor", "xor_eq"};
    return keywords.find(word) != keywords.end();
}

// Function to check if a character is an operator
bool isOperator(char c)
{
    string operators = "+-*/=";
    return operators.find(c) != string::npos;
}

int main()
{
    string input;
    getline(cin, input);

    vector<string> keywords;
    vector<string> identifiers;
    vector<char> operators;

    stringstream ss(input);
    string token;

    while (ss >> token)
    {
        if (isKeyword(token))
        {
            keywords.push_back(token);
        }
        else
        {
            // Check if it's an identifier
            bool isIdentifier = true;
            for (char c : token)
            {
                if (!isalnum(c) && c != '_')
                {
                    isIdentifier = false;
                    break;
                }
            }
            if (isIdentifier)
            {
                identifiers.push_back(token);
            }
        }

        // Check for operators
        for (char c : token)
        {
            if (isOperator(c))
            {
                operators.push_back(c);
            }
        }
    }

    // Print the detected tokens
    cout << "Keywords: ";
    for (const string &keyword : keywords)
    {
        cout << keyword << " ";
    }
    cout << endl;

    cout << "Identifiers: ";
    for (const string &identifier : identifiers)
    {
        cout << identifier << " ";
    }
    cout << endl;

    cout << "Operators: ";
    for (char op : operators)
    {
        cout << op << " ";
    }
    cout << endl;

    return 0;
}
