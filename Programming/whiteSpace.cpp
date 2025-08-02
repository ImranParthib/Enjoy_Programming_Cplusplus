#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string my_str;
    cout<<"Enter the string here : "<<endl;
    getline(cin,my_str);
    cout <<"String with Spaces : "<<my_str<<endl;
    remove(my_str.begin(),my_str.end(), ' ');
    cout<<"String without spaces : "<<my_str<<endl;
    return 0;
}