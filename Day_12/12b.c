#include <stdio.h>
#include <math.h>

int armstrong(int n) {
    int sum = 0, temp = n, digit, digits = 0;

    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
