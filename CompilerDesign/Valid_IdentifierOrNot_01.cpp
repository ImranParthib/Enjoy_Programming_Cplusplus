#include <iostream>
#include <string>
#include <cctype> // For isalnum

using namespace std;

bool isValidIdentifier(const string &str)
{
    if (str.empty() || str.length() > 31)
    {
        return false;
    }

    char firstChar = str[0];

    if (!(isalpha(firstChar) || firstChar == '_'))
    {
        return false;
    }

    for (int i = 1; i < str.length(); i++)
    {
        char c = str[i];
        if (!isalnum(c) && c != '_')
        {
            return false;
        }
    }

    // List of C++ keywords
    const string keywords[] = {
        "alignas", "alignof", "and", "and_eq", "asm", "auto", "bitand", "bitor",
        "bool", "break", "case", "catch", "char", "char16_t", "char32_t", "class",
        "compl", "const", "constexpr", "const_cast", "continue", "decltype",
        "default", "delete", "do", "double", "dynamic_cast", "else", "enum",
        "explicit", "export", "extern", "false", "float", "for", "friend", "goto",
        "if", "inline", "int", "long", "mutable", "namespace", "new", "noexcept",
        "not", "not_eq", "nullptr", "operator", "or", "or_eq", "private",
        "protected", "public", "register", "reinterpret_cast", "return", "short",
        "signed", "sizeof", "static", "static_assert", "static_cast", "struct",
        "switch", "template", "this", "thread_local", "throw", "true", "try",
        "typedef", "typeid", "typename", "union", "unsigned", "using", "virtual",
        "void", "volatile", "wchar_t", "while", "xor", "xor_eq"};

    for (const string &keyword : keywords)
    {
        if (str == keyword)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string str;
    cin >> str;

    if (isValidIdentifier(str))
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}
