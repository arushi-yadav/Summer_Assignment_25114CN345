#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a;
    int ch;
    float amt;

    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    while (1) {
        printf("\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n");
        printf("Choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("Amount: ");
            scanf("%f", &amt);
            a.balance += amt;
            break;

        case 2:
            printf("Amount: ");
            scanf("%f", &amt);
            if (amt <= a.balance)
                a.balance -= amt;
            else
                printf("Insufficient Balance\n");
            break;

        case 3:
            printf("\nAccount No: %d", a.accNo);
            printf("\nName: %s", a.name);
            printf("\nBalance: %.2f\n", a.balance);
            break;

        case 4:
            return 0;
        }
    }
}
