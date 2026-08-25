#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    if(ch >= 'a' && ch <= 'z'){
        cout<< "lower case"<<endl;

    }
    if(ch >= 'A' && ch <= 'Z'){
        cout<<"upper case"<< endl;
    }
    if(ch >= '0' && ch <= '9'){
        cout<<"number"<< endl;
    }
    else{
        cout<<"special char"<< endl;
    }
}
