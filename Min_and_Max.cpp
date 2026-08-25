#include<iostream>

#include<climits>
using namespace std;



int main(){

    //suppose we are taking a specific size in the array thatfrom whcich we want to find the min and max value
    int size;
    cout<<"enter sizw";
    cin>> size;

    int arr[1000];
    cout<<" enter the element";
    for(int i= 0; i< size; i++){
        cin >> arr[i];
    }

    //for max value
    
    int max = INT_MIN;
    for(int i = 0; i< size; i++){
        if(arr[i] > max){
            max = arr[i];


    } 
    
    }
    
    int min = INT_MAX;
    for(int i = 0; i< size; i++){
        if(arr[i] < min){
            min = arr[i];


    } 
    
    }

    cout<<" the max of the array is "<< max <<endl;
    cout<< "the min of the array is "<< min;

}