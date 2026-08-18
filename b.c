#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int sum = 0;
    int num = 1;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= 2 * i - 1; j++) {

            sum += num;
            num++;

            printf("%d ", sum);
        }

        printf("\n");
    }

    return 0;
}