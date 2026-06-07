#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}



#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n == 1)
        printf("0");
    else if(n == 2)
        printf("1");
    else {
        for(i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d", b);
    }

    return 0;
}



#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, rem, sum = 0, digits = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp > 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(sum == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}



#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, rem, sum, digits;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    for(num = start; num <= end; num++) {
        digits = 0;
        temp = num;

        while(temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        sum = 0;

        while(temp > 0) {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}
