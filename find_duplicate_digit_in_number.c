#include<stdio.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int a;
    
    int count[10] = {0};
    while(n>0){
        a = n % 10;
        count[a]++;

        if(count[a] == 2){
            printf("duplicate digit is %d\n", a);
        }
    

        n = n/10;
    }
    
    return 0;
}