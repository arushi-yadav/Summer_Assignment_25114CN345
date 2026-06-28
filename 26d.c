#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== Quiz Application =====\n");

    printf("\n1. Capital of India?\n");
    printf("1.Delhi\n2.Mumbai\n3.Chennai\n4.Kolkata\n");
    scanf("%d", &answer);
    if(answer == 1)
        score++;

    printf("\n2. 5 + 7 = ?\n");
    printf("1.10\n2.12\n3.15\n4.20\n");
    scanf("%d", &answer);
    if(answer == 2)
        score++;

    printf("\n3. C Language was developed by?\n");
    printf("1.Dennis Ritchie\n2.James Gosling\n3.Bjarne Stroustrup\n4.Guido van Rossum\n");
    scanf("%d", &answer);
    if(answer == 1)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}