#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    getline(cin, str);
    int n;
    n = str.length();
    cout << n << endl;

    if(str[0]=='\"' && str[n-1]=='\"'){
        cout << "Double Quoted String" << endl;
    }
    else if(str[0]=='\'' && str[n-1]=='\''){
        cout << "Single Quoted String" << endl;
    }
    else{
        cout << "Not a Single or Double Quoted String" << endl;
    }

    return 0;
}