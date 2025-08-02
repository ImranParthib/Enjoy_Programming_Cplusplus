#include <iostream>
#include <regex>

using namespace std;

class FunctionValidator
{
public:
    void validateFunction(const string &functionDeclaration)
    {
        extractDetails(functionDeclaration);

        if (isLastDigitOdd())
        {
            cout << "For odd ID:" << endl;
            if (validateOdd())
            {
                cout << "This is a valid function" << endl;
                cout << "Return types: " << returnType << endl;
                cout << "Parameters: " << parameters << endl;
            }
            else
            {
                cout << "Invalid function" << endl;
                cout << "Return types: Error!" << endl;
                cout << "Parameters: Error!" << endl;
            }
        }
        else
        {
            cout << "For even ID:" << endl;
            if (validateEven())
            {
                cout << "This is a valid function" << endl;
                cout << "Function name: " << functionName << endl;
                cout << "Body: " << body << endl;
            }
            else
            {
                cout << "Invalid function" << endl;
                cout << "Function name: Error!" << endl;
                cout << "Body: Error!" << endl;
            }
        }
    }

private:
    string returnType;
    string parameters;
    string functionName;
    string body;

    void extractDetails(const string &functionDeclaration)
    {
        regex pattern("(\\w+)\\s+(\\w+)\\(([^)]*)\\)\\s*\\{([^}]*)\\}");
        smatch match;
        if (regex_match(functionDeclaration, match, pattern))
        {
            returnType = match[1];
            functionName = match[2];
            parameters = match[3];
            body = match[4];
        }
    }

    bool isLastDigitOdd()
    {
        return (functionName.empty() || (functionName.back() - '0') % 2 != 0);
    }

    bool validateOdd()
    {
        // Add additional validation logic for odd ID
        return !returnType.empty() && !parameters.empty();
    }

    bool validateEven()
    {
        // Add additional validation logic for even ID
        return !functionName.empty() && !body.empty();
    }
};

int main()
{
    FunctionValidator validator;

    // Input data from users
    string functionDeclaration;
    cout << "Enter the function declaration: ";
    functionDeclaration = "CSE332(int course){ // this is the body }";
        // getline(cin, functionDeclaration);

        // Validate the function
        validator.validateFunction(functionDeclaration);

        return 0;
    }
