#include <bits/stdc++.h>
using namespace std;

int main()
{
    string userinput;
    getline(cin, userinput);
    // userinput = "for(int i ++ -- + - % = 0; i<10; i++)";

    int n = userinput.size();

    cout << "Operator\t"
         << "Type\t"
         << "\tValid/Invalid" << endl;

    for (int i = 0; i < n; i++)
    {
        if (userinput[i] == '=')
        {
            if (userinput[i - 1] != '+' || userinput[i - 1] != '-' || userinput[i - 1] != '*' || userinput[i - 1] != '%')
            {
                cout << userinput[i] << "\tAssignment Operator"
                     << "\tValid" << endl;
            }
        }
        else if (userinput[i] == '+' && userinput[i + 1] == '=')
        {
            cout << "+="
                 << "\tAssignment Operator"
                 << "\tValid" << endl;
        }
        else if (userinput[i] == '-' && userinput[i + 1] == '=')
        {
            cout << "-="
                 << "\tAssignment Operator"
                 << "\tValid" << endl;
        }
        else if (userinput[i] == '*' && userinput[i + 1] == '=')
        {
            cout << "*="
                 << "\tAssignment Operator"
                 << "\tValid" << endl;
        }

        else if (userinput[i] == '?' && userinput[i + 1] == ':')
        {
            cout << "?:"
                 << "\ttarnary operator"
                 << "\tValid" << endl;
        }
        else if (userinput[i] == '+' && userinput[i + 1] == '+')
        {
            cout << "++"
                 << "\tUnary Operator"
                 << "\t\tValid" << endl;
        }
        else if (userinput[i] == '-' && userinput[i + 1] == '-')
        {
            cout << "--"
                 << "\tUnary Operator"
                 << "\tValid" << endl;
        }
        else if (userinput[i] == '+' && userinput[i] == '-')
        {
            if (userinput[i + 1] != '+' || userinput[i + 1] != '-' || userinput[i + 1] != '=')
            {
                cout << userinput[i] << "\tArithmetic Operator"
                     << "\tValid" << endl;
            }
        }
        else if (userinput[i] == '<')
        {
            if (userinput[i + 1] != '=')
            {
                cout << "<"
                     << "\tRelational Operator"
                     << "\tValid" << endl;
            }
        }
        else if (userinput[i] == '>' || userinput[i] == '=' || userinput[i] == '!')
        {
            if (userinput[i + 1] == '=')
            {
                cout << userinput[i] + userinput[i + 1] << "\tRelational Operator"
                     << "\tValid" << endl;
            }
        }
        else if (userinput[i] == '!')
        {
            if (userinput[i + 1] != '=')
            {
                cout << "!"
                     << "\tLogical Operator"
                     << "\tValid" << endl;
            }
        }
        else if (userinput[i] == '&' || userinput[i] == '|')
        {
            if (userinput[i + 1] == '&' || userinput[i + 1] == '|')
            {
                cout << userinput[i] + userinput[i + 1] << "\tLogical Operator"
                     << "\tValid" << endl;
            }
        }
        else if (userinput[i] == '^')
        {
            cout << "^"
                 << "\tBitwise Operator"
                 << "\tValid" << endl;
        }
        else if (userinput[i] == '&' || userinput[i] == '|' || userinput[i] == '<' || userinput[i] == '>' || userinput[i] == '-')
        {
            if (userinput[i + 1] == '&' || userinput[i + 1] == '|' || userinput[i + 1] == '<' || userinput[i + 1] == '>' || userinput[i + 1] == '-')
            {
                cout << "^"
                     << "\tBitwise Operator"
                     << "\tValid" << endl;
            }
        }
    }
    return 0;
}