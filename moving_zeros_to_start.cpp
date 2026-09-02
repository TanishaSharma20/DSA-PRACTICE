// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    //std::cout << "Start small. Ship something.";
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
    cin>> n;

    int a[n];
    cout<<"enter the array elements: ";
    for(int i = 0; i < n; i++){
    cin >> a[i];
}
    int i = 0;
    int j = 1;
    
    
    for(i = 0; i < n; i++){
        for(j = i + 1; j< n; j++){
            if(a[j] == 0){
                int temp = a[i];
                a[i] = a[j];
                a[j]= temp;
                break;
            }
        }
        
    }
        
    for(i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}