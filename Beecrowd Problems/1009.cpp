#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    string sName;
    getline(cin,sName);
    double fixedSalary, salesTotal, finalSalary;
    cin>>fixedSalary>>salesTotal;
    finalSalary = fixedSalary + (salesTotal*15/100);
    cout<<fixed<<setprecision(2);
    cout<<"TOTAL = R$ "<<finalSalary<<endl;

    return 0;
}