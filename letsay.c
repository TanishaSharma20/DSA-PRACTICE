#include<stdio.h>

int main(){
    int n;
    printf("enter the number of rows: ");
    scanf("%d", &n);
/*
1
21
321
4321
54321*/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            int d = i -j + 1;
            printf("%d", d);
            
        }
        printf("\n");
    }
    return 0;
}