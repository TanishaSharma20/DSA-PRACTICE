#include<stdio.h>
int main(){
    int n;
    int s= 0;
    int a;

    printf("enter a number: ");
    scanf("%d", &n);

    while(n>0){
        a = n% 10;
        s = s+a;
        n = n/10;
    }

    printf("the sum of the number is %d ", s);
    return 0;
}
