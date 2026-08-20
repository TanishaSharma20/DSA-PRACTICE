#include<stdio.h>
int main(){
    int a;
    int b;
    
    int s = 0;
    printf(" Enter the numberto check whether it is a palindrome of not:");

    scanf("%d", &a );

    int c = a;
    
    while(a>0){
        b = a % 10;
        s = s * 10 + b;
        a = a/10;
        
    }
    printf("the number after reversing is %d \n", s);
    

    if(c == s){
        printf("yes the number is palindrome!!");

    }
    else {
        printf("the number is not palindrome!!");
    }


return 0;





}