#include<stdio.h>
int main(){
    int a[7] = {1,2,3,0,0,5,4};
    
    for(int i= 0; i<7;i++){
        if(a[i]==0){
            a[0] = a[i];
            printf("%d", a);
        }
    }



}