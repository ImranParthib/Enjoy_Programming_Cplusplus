#include<iostream>
using namespace std;

int main(){

    int n;
    string str;

    cout<<"Enter the comment Here :"<<endl;
    getline(cin,str);
     
    n =str.size();
    
    if(n >= 2 && str[0] =='/' && str[1] == '/'){
        cout<<"Single Line Comment!"<<endl;
    }
    else if(n >= 4 && str[0] == '/' && str[1] == '*' && str[n-1] =='/' && str[n-2] == '*'){
        cout<<"Multiline Comment!"<<endl;
    }
    else{
        cout<<"Not a comment"<<endl;
    }
    return 0;
}