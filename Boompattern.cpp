#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number of rows: ";
    cin>>n;

    int i = 1;

    while(i<=n){
        int a = n-i+1;
        int j = 1;
        
        while(j<=a){
            cout<<j;
            j = j+1;
            
        }
        j = 1;

        while(j <= 2*(i-1))
        {
            cout<<"*";
            j = j+1;
                }
        j = n - i + 1;

        while(j >= 1) {
            cout << j;
            j--;
        }
        
        cout<<endl;
        i = i+1;
    }

    return 0;
}