#include<stdio.h>
int main(){

    int n;
    printf("Enter the number till which you wnat to print the prime number ;");
    scanf("%d",&n);
    
    for(int i = 2; i <= n; i++){
        int j;
        for( j = 2; j <= i; j++){
            if(i % j == 0){
                break;

            }
        }
         if(i == j){
            printf("%d ", i);
         }


    }
    return 0;
}