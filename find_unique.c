#include<stdio.h>
int main(){
    int n;
    
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int b = 0;

    int a[n];
    printf("enter the elements:");
//[1,2,3,4,5] s = 7 by index = 0
    for(int i = 0; i< n; i++){
        scanf("%d", &a[i]);


    }
    int i = 0;
    for(i = 0; i < n; i++){
        b = b ^ a[i];
    }
    
        printf("%d", b);
        
       return 0;
}