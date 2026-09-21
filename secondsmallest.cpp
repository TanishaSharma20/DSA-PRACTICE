#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int a[n];

    for(int i = 0; i<n; i++){
        cin>>a[i];
        

    }

    int smallest = a[0];
    int secondsmallest = a[1];
    
    if(secondsmallest < smallest){
        int temp = smallest;
        smallest = secondsmallest;
        secondsmallest = temp;
    }

    for(int j = 2; j<n; j++){
        if(a[j]< smallest){
            secondsmallest = smallest;
            smallest = a[j];
    

        }
        else if ( a[j] < secondsmallest){
            secondsmallest = a[j];
        }
    }
    cout << "Smallest = " << smallest << endl;
    cout << "Second smallest = " << secondsmallest << endl;


    
    return 0;
    
}
