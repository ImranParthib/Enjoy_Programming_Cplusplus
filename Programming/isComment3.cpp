#include <iostream>
using namespace std;

int main() {
    string str;
    bool flag; //then it is a comment

    cout << "Enter the String Here: " << endl;
    getline(cin, str);
    int n = str.size();

    if(flag = true)
    {
        cout<<"This is a Comment\nAnd"<<endl;
    }

    if (n >= 2 && str[0] == '/' && str[1] == '/') 
    
    {
        flag = true;
        cout<<"This is a single line comment"<<endl;
    } 
    else if (n >= 4 && str[0] == '/' && str[1] == '*' && str[n - 1] == '/' && str[n - 2] == '*')
    {
        flag = true;
        cout<<"This is a multiLine Comment"<<endl;
    } 
    else
    {
        flag = false;
        cout<<"This is not a Comment"<<endl;
    }
    
    return 0;
}
