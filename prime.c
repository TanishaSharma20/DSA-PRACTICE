#include<stdio.h>
int main(){

    int n;
    printf("Enter the number till which you wnat to print the prime number ;");
    scanf("%d",&n);
    // n = 10
    for(int i = 2; i <= n; i++){ //2,3,5,7
        //i = 2, i smaller than n true we enter j  j = 2  j till i ,  i = 2
        int j;
        for( j = 2; j <= i; j++){//i =5 j = 2
            if(i % j == 0){ // 5 %2 ==1 j }+1 = 3, 5 %3=1 false j = 4 5%4 =1 j = 5; 5%56 =0
                break;

            }
        }
         if(i == j){// 2 ==2 true 3 == 2 false 4 ==2 false 5==5true 
            
            printf("%d ", i); //2 // i= +1 = 3, 4, 5 6
         }


    }
    return 0;
}