#include <stdio.h>

int main() {
    int i, j, k, num = 5;

    for(i = 1; i <= num; i++) {

        for(j = 1; j <= num - i; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("%d", j);

        for(k = i - 1; k >= 1; k--)
            printf("%d", k);

        printf("\n");
    }

    return 0;
}