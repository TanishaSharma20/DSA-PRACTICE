#include<stdio.h>
#define n 10
int main() {
    int a ;
    int s=1;
    printf("enter a number");
    scanf("%d", &a);

    //int s=1;
    if(a/10 !=0){
        s++;
    } 
    //printf("%d", &s);

    int arr[s];
    for(int i = s-1; i<=s;i--){
        int r;
        r= a%10;
        arr[i]= r;
        a = a/10;

    }
    int k;
    for(int i = 0; i< s; i++){
        for(int j =1; j<s-1; j++){
            if(arr[j]==arr[i]){
                k++;

                //printf("not unique");
            }


        }
        if(k!=0){
            printf("not unique");
        }
        else{
            printf("unique");
        }
    }




    //int = sizeof(a)/sizeof(a[0]);

    //for(int i = 0; i < n; i++){
        
    
    return 0;
}
