#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number of rows:");
    scanf("%d", &n);

    int i;
    int j;
    for(i = 0; i< n; i++){
        for(j = 0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}