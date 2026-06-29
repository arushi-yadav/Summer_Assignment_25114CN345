#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    int qty;
};

int main() {
    struct Book b[100];
    int n = 0, ch, id, i;

    while (1) {
        printf("\n1.Add Book\n2.Display\n3.Search\n4.Issue\n5.Return\n6.Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("Book ID: ");
            scanf("%d", &b[n].id);
            printf("Book Name: ");
            scanf(" %[^\n]", b[n].name);
            printf("Author: ");
            scanf(" %[^\n]", b[n].author);
            printf("Quantity: ");
            scanf("%d", &b[n].qty);
            n++;
            break;

        case 2:
            for (i = 0; i < n; i++)
                printf("%d %s %s %d\n", b[i].id, b[i].name, b[i].author, b[i].qty);
            break;

        case 3:
            printf("Enter ID: ");
            scanf("%d", &id);
            for (i = 0; i < n; i++)
                if (b[i].id == id)
                    printf("%d %s %s %d\n", b[i].id, b[i].name, b[i].author, b[i].qty);
            break;

        case 4:
            printf("Enter ID: ");
            scanf("%d", &id);
            for (i = 0; i < n; i++)
                if (b[i].id == id && b[i].qty > 0) {
                    b[i].qty--;
                    printf("Book Issued\n");
                }
            break;

        case 5:
            printf("Enter ID: ");
            scanf("%d", &id);
            for (i = 0; i < n; i++)
                if (b[i].id == id) {
                    b[i].qty++;
                    printf("Book Returned\n");
                }
            break;

        case 6:
            return 0;
        }
    }
}