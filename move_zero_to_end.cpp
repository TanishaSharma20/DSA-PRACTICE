#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";

    for(int i = 0; i <n; i++) {
        cin >> a[i];
    }

    for(int i = n-1; i >= 0; i--){
        
        if(a[i] != 0){
        for(int j = i - 1; j >=0 ; j--){
            if(a[j] == 0){
                
                
                int temp;
                temp = a[i];
                a[i]= a[j];
                a[j] = temp;
            }
            
        }
    }}
    cout<<"After moving the elements to start "<<endl;
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

