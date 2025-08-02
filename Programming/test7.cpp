#include<iostream>
using namespace std;
 int main()
 {

    int i,n;
    string str;
    string result = "";
    getline(cin,str);
    n = str.size();

    for(i =0 ; i<n;i++){
        if(str[i] != ' '){
            result +=str[i];
        }
    }
    cout<<result<<endl;
    for(i = 0; i<n;i++)
    {
        if(str[i] == ' '){
            cout<<"#";
        }
    }
    
    return 0;
 }