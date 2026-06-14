#include <stdio.h>

int main() {
    int n, largest = 0, i;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}
