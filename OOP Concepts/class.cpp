#include<iostream>
using namespace std;

class MyClass {
    public:
   
    string myString;
    int myNum;
    int z;  
};

int main(){
    MyClass myObj;

    myObj.myNum = 17;
    myObj.myString = "Md Imran Parthib";
    myObj.z = myObj.myNum * 8;

    for(int i=0;i<myObj.z;i++){
        cout<<"*";
         if ((i + 1) % 8 == 0){
            cout<<endl;
        }
     
    }

    cout<<myObj.myString<<endl;
    cout<<"\""<<myObj.myNum<<"\""<<endl;
    cout<<myObj.z;



    return 0;
}
