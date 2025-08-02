#include <bits/stdc++.h>
using namespace std;

bool isSeparator(char ch)
{
    string value = " ,;(){}[]";
    for (int i = 0; i < value.size(); i++)
    {
        if (ch == value[i])
        {
            return true;
        }
    }
    return false;
}
bool isOparator(char ch)
{
    string value = "+-*/<>=!";
    for (int i = 0; i < value.size(); i++)
    {
        if (ch == value[i])
        {
            return true;
        }
    }
    return false;
}

void parse(string s)
{
    vector<string> tokens;
    string token = "";

    for (int i = 0; i < s.size(); i++)
    {
        if(isSeparator(s[i])){
            if(token!=""){
                tokens.push_back(token);
            }
            token = "";
        }

        else if(isOparator(s[i])){
            if(token!=""){
                tokens.push_back(token);
                token = "";
            }
            token.push_back(s[i]);
            tokens.push_back(token);
        }
    }
}

int main()
{
    ifstream file;
    string line;
    file.open("lexiacalAnalysisChatGpt.cpp");
    while (file)
    {
        getline(file, line);
        parse(line);
    }
    file.clos();

    return 0;
}