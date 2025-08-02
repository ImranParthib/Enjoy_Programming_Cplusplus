#include <iostream>
using namespace std;

int main() {
    string str;
    // bool flag;

    cout << "Enter the String Here: " << endl;
    getline(cin, str);
    int n = str.size();

    if(n>=2 && str[0] == '"' && str[n-1] == '"'){
        cout<<"This is a String"<<endl;
    }
    else{
        cout<<"This is not a String";
    }
    
    return 0;
}