#include<stdio.h>

int main(){
    int n;
    printf("enter the number of characters in the string:");
    scanf("%d", &n);
    char a[n + 1];
    printf("enter the string you want to reverse:");
    scanf("%s", &a );

    int i = 0;
    int j = n-1;

    while (i < j){
        
        
            int temp;
            temp = a[i];

            a[i] = a[j];
            a[j] = temp;
            
            i++;
            j--;


        }
    printf("the reverse of the string is : %s", a);
        

    
    return 0;
}
