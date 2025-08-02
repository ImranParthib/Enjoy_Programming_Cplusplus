#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
    // Input for each identifier
    map<string, string> identifiers = {
        {"a", "10 + 20"},
        {"b", "20"},
        {"c", "30 / 3"},
        {"f", "14 + 12"},
        {"k", "9"},
        {"e", "+30"},
        {"i", "25 * 9"},
        {"m", "15"},
        {"p", ">90"},
        {"q", "< 100 + 16"}};

    // Process input and store in a map
    map<string, map<string, vector<string>>> processed_input;
    for (const auto &entry : identifiers)
    {
        const string &identifier = entry.first;
        const string &input_str = entry.second;

        // Tokenize the input
        regex token_regex(R"(\b\w+\b|\b\W+\b|\b\d+\b)");
        sregex_token_iterator it(input_str.begin(), input_str.end(), token_regex, 0);
        sregex_token_iterator end;

        // Store tokens in separate vectors
        vector<string> tokens(it, end);
        vector<string> identifiers, operators, digits;

        // Classify tokens into identifiers, operators, and digits
        for (const auto &token : tokens)
        {
            if (regex_match(token, regex(R"(\b\w+\b)")))
            {
                identifiers.push_back(token);
            }
            else if (regex_match(token, regex(R"(\b\W+\b)")))
            {
                operators.push_back(token);
            }
            else if (regex_match(token, regex(R"(\b\d+\b)")))
            {
                digits.push_back(token);
            }
        }

        // Store the classified tokens in the processed_input map
        processed_input[identifier] = {
            {"identifiers", identifiers},
            {"operators", operators},
            {"digits", digits}};
    }

    // Print the processed input
    for (const auto &entry : processed_input)
    {
        const string &identifier = entry.first;
        const auto &data = entry.second;

        cout << "Identifier: " << identifier << endl;
        cout << "  Identifiers: ";
        for (const auto &id : data.at("identifiers"))
        {
            cout << id << " ";
        }
        cout << endl;

        cout << "  Operators: ";
        for (const auto &op : data.at("operators"))
        {
            cout << op << " ";
        }
        cout << endl;

        cout << "  Digits: ";
        for (const auto &digit : data.at("digits"))
        {
            cout << digit << " ";
        }
        cout << endl;

        cout << endl;
    }

    return 0;
}
