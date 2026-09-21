#include<iostream>
using namespace std;

int main(){
     int m,n;
    cout<<"enter the value of m and n";
    cin>>m>>n;
    int a[m];
    int b[n];

    //enter array elememt
    for(int i = 0; i<m; i++){
    cin>>a[i];
        }
    for(int i = 0; i<n;i++){
        cin>>b[i];
    }
int i = 0;
int j = 0;


while(i<m && j<n){
    if(a[i] < b[j]){
        i++;
    
        
}
    else if(a[i] == b[j]){
    cout<<a[i]<<" "<<b[j]<<endl;
        i++;
        j++;
    }
    else{
    j++;}
}
return 0;
}