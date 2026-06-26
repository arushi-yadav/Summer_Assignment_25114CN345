
#include <string.h>

int main() {
    char names[20][50], temp[50];
    int n;

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter names:\n");
    for(int i = 0; i < n; i++)
        scanf("%s", names[i]);

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted Names:\n");
    for(int i = 0; i < n; i++)
        printf("%s\n", names[i]);

    return 0;
}
