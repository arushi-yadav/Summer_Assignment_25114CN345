#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
};

int main() {
    struct Contact c[100];
    int n = 0, ch, i;
    char search[50];

    while (1) {
        printf("\n1.Add Contact\n2.Display\n3.Search\n4.Exit\n");
        printf("Choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("Name: ");
            scanf(" %[^\n]", c[n].name);

            printf("Phone: ");
            scanf("%s", c[n].phone);

            n++;
            break;

        case 2:
            for (i = 0; i < n; i++)
                printf("%s - %s\n", c[i].name, c[i].phone);
            break;

        case 3:
            printf("Enter Name: ");
            scanf(" %[^\n]", search);

            for (i = 0; i < n; i++) {
                if (strcmp(c[i].name, search) == 0)
                    printf("%s - %s\n", c[i].name, c[i].phone);
            }
            break;

        case 4:
            return 0;
        }
    }
}
