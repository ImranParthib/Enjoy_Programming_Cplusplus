#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    char smallLetters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char capitalLetters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    if (str.empty() || str.length() > 31)
    {
        cout << "Invalid" << endl;
        return 0;
    }

    char firstChar = str[0];
    bool isValid = false;

    for (char c : smallLetters)
    {
        if (firstChar == c)
        {
            isValid = true;
            break;
        }
    }

    if (!isValid)
    {
        for (char c : capitalLetters)
        {
            if (firstChar == c)
            {
                isValid = true;
                break;
            }
        }
    }

    if (!isValid)
    {
        cout << "Invalid" << endl;
        return 0;
    }

    for (int i = 1; i < str.length(); i++)
    {
        char c = str[i];
        if (!isalnum(c) && c != '_')
        {
            cout << "Invalid" << endl;
            return 0;
        }
    }

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
            cout << "Invalid (Keyword)" << endl;
            return 0;
        }
    }

    cout << "Valid" << endl;

    return 0;
}
