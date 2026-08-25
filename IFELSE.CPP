#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;

    if(a>b){
        cout<<"a is greater than b"<< endl;

    }
     else if(a < b){
        cout<<"b is greater than a"<< endl;

     }
     else{
        cout<<" both are equal"<<endl;
     }

}

/* g++ IFELSE.cpp -o IFELSE
.\IFELSE.EXE */