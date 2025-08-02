#include<iostream>
using namespace std;


void printAscci(char c){

    int i = c;
    cout<<"The Ascii Value of "<<c<<" is "<<i<<endl;
}

int main(){

    printAscci('A');
    printAscci('B');
    printAscci('c');
    return 0;
}