#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"enter the number: ";
    cin>>n;

    if(n % 3 == 0 && n % 5 == 0){
        cout<<"fizzbuzz";

    }
    else if(n % 3 == 0){
        cout <<"fizz";
    }
    else if(n % 5 == 0){
        cout<<"buzz";
    }
    else{
        cout<< n;
    

    }
return 0;
}