#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    // for checking purpose
    // str = "aaaabbb";
    // str = "aaaaaaaa";
    // str = "abb";

    
    getline(cin, str);

    int n = str.length();

    bool state1 = false;
    bool state2 = false;
    bool state3 = false;

    for (int i = 0; i < n; i++)
    {
        state1 = false;
        if(str[i]==' ' or str[i]=='a'){
            state1 = true;
        }
        
    }
    for (int i = 0; i < n; i++){
        state2 = false;
        if (str[i] == ' ' || str[i] == 'a' || str[i] == 'b')
        {
            state2 = true;
        }
       
    }
    for (int i = 0; i < n; i++){
        state3 = false;
        if (str[0] == 'a' && str[1] == 'b' && str[2] == 'b')
        {
            state3 = true;
        }
    }
        

    if(state1==true or state2==true or state3==true){
        if (state1 == true)
        {
            cout << "String goes to a*" << endl;
        }
        else if (state3 == true)
        {
            cout << "String goes to abb" << endl;
        }
        else if (state2 == true)
        {
            cout << "String goes to a*b^+" << endl;
        }
    }
    else{
        cout << "Rejected" << endl;
    }
     
        return 0;
}