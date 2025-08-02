#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int eNum,wHour;
    float eSal,perHour;
    cin>>eNum>>wHour>>perHour;
    eSal = wHour * perHour;
    cout<<"NUMBER = "<<eNum<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"SALARY = U$ "<<eSal<<endl;

    return 0;
}