#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    int low = 0, high = n - 1, mid;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            printf("Found at position %d", mid + 1);
            return 0;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Not Found");
    return 0;
}