#include <stdio.h>

int main() {
    int seats = 10;
    int ch, n;

    while (1) {
        printf("\n1.Book Ticket\n2.Cancel Ticket\n3.Available Seats\n4.Exit\n");
        printf("Choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("Number of Tickets: ");
            scanf("%d", &n);

            if (n <= seats) {
                seats -= n;
                printf("Booking Successful\n");
            } else
                printf("Seats Not Available\n");
            break;

        case 2:
            printf("Tickets to Cancel: ");
            scanf("%d", &n);

            seats += n;
            if (seats > 10)
                seats = 10;

            printf("Cancellation Successful\n");
            break;

        case 3:
            printf("Available Seats: %d\n", seats);
            break;

        case 4:
            return 0;
        }
    }
}