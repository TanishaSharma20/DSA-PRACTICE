#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter the first number : ");
    
    scanf("%d", &a);

    printf("enter the second number : ");

    scanf("%d", &b);


    printf("before swapping the numbers are a = %d and b = %d \n", a, b);

    a = a+b;
    b = a - b;
    a = a -b;
    printf (" the numbers after swapping are a = %d b = %d", a, b);
    return 0;
}