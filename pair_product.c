#include<stdio.h>
int main(){
    int n;
    int s;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    printf("enter the product of two values:");
    scanf("%d", &s);

    int a[n];
    printf("enter the elements:");
//[1,2,3,4,5] s = 7 by index = 0
    for(int i = 0; i< n; i++){
        scanf("%d", &a[i]);


    }
    for(int i = 0;i< n;i++){
        for(int j = i+1;j<n;j++){
            int b = a[i] * a[j];

            
        if(b == s ){
            
            printf("%d %d", a[i], a[j]);
        }
    }
}
    return 0;
}