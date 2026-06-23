#include <stdio.h>

int main() {

    char str[100], ch;
    int i=0, count=0;

    printf("Enter string: ");

    gets(str);

    printf("Enter character: ");

    scanf("%c",&ch);

    while(str[i] != '\0') {

        if(str[i]==ch)

            count++;

        i++;
    }

    printf("Frequency = %d",count);

    return 0;
}