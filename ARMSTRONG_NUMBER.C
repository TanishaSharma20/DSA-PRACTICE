#include<stdio.h>
int main(){
    int a;
    int b;
    int c = 0;
    int d;
    int e;
    int f = 1;
    int g =0;
    

    printf("Enter the number to check if it is armstrong or not: ");
    scanf("%d", &a);
    b = a;
    while (b != 0){
        b = b/10;
        c++;

    }

    d = c;
    b = a;
    while(b != 0){
        d = c;
        f = 1;
        e = b % 10;
        while(d != 0){

        f = f * e;
        d--;

        
    }
        g = g + f;
        
        b= b/10;


}
if(a == g){
    printf("The number is an Armstrong number.");
}
else{
    printf("The number is not an Armstrong number.");
}
return 0;
}