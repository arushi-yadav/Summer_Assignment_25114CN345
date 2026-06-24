#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};

    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    int maxFreq = 0;
    char maxChar;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    printf("%c -> %d", maxChar, maxFreq);

    return 0;
}