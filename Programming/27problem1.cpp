#include<iostream>
using namespace std;

int main(){
    int i =0,n;
    string str;
    string result ="";
    cout<<"Enter a String Here : "<<endl;
    getline(cin,str);
    n = str.size();
    
    

    for (i = 0; i < n; i++)
            {
                if(str[i] != ' '){
                    result += str[i];
                }      
            }        
    //   cout<<result<<endl;
    for(i = 0; i<n;i++){
        if(str[i] == ' ')
        {   
            cout<<"\n"<<endl;
            
        }
    } 
    cout<<result<<endl;

    for(i = 0; i<n;i++){
        if(str[i] == ' ')
        {   
            cout<<"#";
            
            
        }
    }    
    return 0;
}