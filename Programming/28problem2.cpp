#include<iostream>
using namespace std;
int main(){

    int i,j,n;
    string str;
    getline(cin,str);
    string result = "";
    int sum;
    n = str.size();

    for(i=0;i<n;i++){
        if(str[i] == '/')
        {      
            i++;
            sum=(n-i)+1;
            for ( j = 0; j < i-1; j++)
            {
                result +=str[j];
            }
             
        } 
               
    }
    cout<<result<<endl;
    cout<<sum;

    return 0;

}