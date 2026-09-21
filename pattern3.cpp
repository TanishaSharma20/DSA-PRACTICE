// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    //std::cout << "Start small. Ship something.";
    int n;
    cout<<"enter n: ";
    cin>>n;
    //
    
    for(int i = 1; i<=n;i++){
        int r = i;
        for(int j = 1; j<=i;j++){
            cout<<r<<" ";
             r++;
        }
        cout<<endl;
    }

    return 0;
}

//or we can print same without taking extra r by i+J+1