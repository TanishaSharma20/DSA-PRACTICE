#include<stdio.h>
int main(){
    int n;
    int a = 0;
    
    printf("enter a number: ");
    scanf("%d", &n);

    if(n<0){
        n = -n;

    }
    if(n ==0){
        a = 1;
    }
    else{
        while(n>0){
            n = n/10;
            a++;
        }

    }
    printf("%d", a);

    return 0;
}