#include<iostream>
using namespace std;

int addfuction(int a , int b){
    return a + b;
} 

double addfunction(double a, double b){
    return a +b;
}
int main(){
    int sum1 = addfunction(4, 6);
    double sum2 = addfunction(4.6, 6.7);
    cout<<"Int :"<<sum1<<endl;
    cout<<"Double :"<<sum2;

    return 0;

}