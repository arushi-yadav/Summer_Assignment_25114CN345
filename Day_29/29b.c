#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum = 0, max, min;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n--- Array Operations ---\n");
        printf("1. Display\n2. Sum\n3. Maximum\n4. Minimum\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array: ");
                for (i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for (i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;

            case 3:
                max = arr[0];
                for (i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];
                printf("Maximum = %d\n", max);
                break;

            case 4:
                min = arr[0];
                for (i = 1; i < n; i++)
                    if (arr[i] < min)
                        min = arr[i];
                printf("Minimum = %d\n", min);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}
