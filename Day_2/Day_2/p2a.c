#include <stdio.h>
int main(){
    int num,sum=0,digit;
    printf("enter the sum num:");
    scanf("%d",&sum);
    while(num > 0){
    digit = num%10;
    sum = sum + digit;
    num = num/10;
    }
    printf("sum  of digit =%d",sum);
    
    return 0;
}
