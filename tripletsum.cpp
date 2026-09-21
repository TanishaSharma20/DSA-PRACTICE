#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[5] ={1,2,3,4,5};
    int l = 6;

    for(int i = 0; i<5;i++){
    for(int j = i+1; j<5; j++){
        for(int k = j+1; k<5; k++){
            if(a[i] + a[j]+ a[k] == l){
            cout<<a[i]<<" "<< a[j]<< " "<< a[k];
            
        }
            
        
        }
    }
    cout<<endl;
    }
    return 0;
}
    

/*
int main(){
    int n;
    cout<<"enter n: ";
    cin>> n;
    
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
      }
    for(int i = 0; i< n; i+=2){
        if((i+1)<n){
        int temp;
            temp = a[i];
            a[i]= a[i+1];
            a[i+1]= temp;
    }
    }
        for(int i =0; i<n; i++){
            cout<<a[i]<<" ";
    }
        return 0;
   
            
            
  
}
*/
        