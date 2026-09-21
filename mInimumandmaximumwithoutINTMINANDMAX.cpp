#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>> n;
    
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
      }
    int min = a[0];
    int max = a[0];

    for(int i = 0; i < n; i++){
        if(a[i] < min){
        min = a[i];
            
            
    }
        if(a[i]> max){
        max = a[i];
        }
       
    }
    cout<<"the min is "<< min<<endl;
    cout<<"the max is "<< max<<endl;
    return 0;
}

        