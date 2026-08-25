#include<stdio.h>

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    int a;
    int greatest = 0;
    int smallest = 9;

    while(n > 0){
        a = n % 10;

        if(a > greatest){
            greatest = a;
        }
        if(a < smallest){
            smallest = a;
        }

        n = n/10;
    }

    
    printf("the largest value : %d \n", greatest);
    printf("the smallest value : %d", smallest);


    return 0;
}