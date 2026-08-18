#include <stdio.h>

int main(){
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);
    
    int r = 0;

     while(x > 0){
        int y = x % 10;
        r = r * 10 + y;
        x = x/10;
     }     

     printf("%d", r);

     return 0;
}