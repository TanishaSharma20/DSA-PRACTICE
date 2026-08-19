#include<stdio.h>

int main(){
    int a;
    printf("Enter the number of elements in array: ");
    scanf("%d", &a);

    int arr[a];

    int i;
    printf("enter the elements in the array: ");

    for(i= 0; i<a; i++){
        scanf("%d", &arr[i]);

    }
    printf("the reverse order of the array is: ");

    for(i=a-1; i>=0; i--){
     printf("%d ", arr[i]);
    }
return 0;
}