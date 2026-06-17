#include <stdio.h>

int main() {
    int n, i, j = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n], result[n];

    printf("Enter elements:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            result[j] = arr[i];
            j++;
        }
    }

    while(j < n) {
        result[j] = 0;
        j++;
    }

    printf("Array after moving zeroes:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
