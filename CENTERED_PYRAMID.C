#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d", &n);
    
    int i;
    int j;

    for (i = 1; i< n; i++){
        for(j = 0; j < 2*n - 1; j++){
            if(j>=n-(i-1) && j<= n+(i-1)){
                printf("*");
        }
        else{
            printf(" ");
        }
        }
        printf("\n");
    }
    return 0;
}

