// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a;
    cin>>a;
/*1
  2 3
  3 4 5
  4 5 6 7
  5 6 7 8 9*/
    int i = 1;
    while(i<=a){
        int j = 1;
        int count = i;
        while(j<= i){
            cout<< count<<" ";
            count= count+1;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }

    return 0;
}