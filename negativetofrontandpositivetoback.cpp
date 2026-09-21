#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"enter the array elements: ";
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int front = 0;
    int end = n-1;
    while(front < end){
        
        if(a[front] < 0 && a[end] < 0){
            front++;
        }
        else if(a[front] > 0 && a[end] > 0){
            end--;
        }
        else if(a[front] > 0 && a[end] < 0){
            int temp = a[front];
            a[front] = a[end];
            a[end] = temp;
            front++;
            end--;
        }
        else{
            front++;
            end--;
        }
    }
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
return 0;

}

