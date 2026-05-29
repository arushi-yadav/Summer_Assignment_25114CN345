#include <stdio.h>
int main(){
    int num, product,digit;
    printf("enter the number:");
    scanf("%d",&num);
    while (num>0)
    {
        digit = num % 10;
        product = product*digit;
        num = num/10;
    }
    printf("product of digit =%d",product);
        return 0;



}