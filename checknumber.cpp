#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>> n;

    if(n < 0){
        cout<<"the number is negative";

    }
    else if(n > 0){
        cout<<"the number is positive";

    }
    else {
        cout<<" the number is 0";
    }
    return 0;

}
/* g++ IFELSE.cpp -o IFELSE
.\IFELSE.EXE */
