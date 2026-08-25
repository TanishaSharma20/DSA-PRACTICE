#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int sum = 0;
    int num = 1; //number will increase by 1 in each iteration

    for (int i = 1; i <= n; i++) {//loop for rows

        for (int j = 1; j <= 2 * i - 1; j++) {//loop for columns and the loop is running till 2 * i - 1 because the number of digits printing in each volumn is 2 * i - 1 let say row 2 then it will be 2 * 2 - 1 = 3 so we wull be printing 3 digits in the row 2 and fo on

            sum += num;// this is increasing like in starting sum is 0 then in the first iteration it will be 0 + 1 = 1 and we will save this and then in the next iteration we will be taking the valuse of sum by adding the value of num which is 1 then it will be 1 + 2 = 3
            num++; // we are increasing the value of num by 1 after each iteration so that we can go to the next required number in the iteration

            printf("%d ", sum);
        }

        printf("\n");
    }

    return 0;
}