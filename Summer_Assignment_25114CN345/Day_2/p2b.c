#include <stdio.h>
int main(){
    int num, reverse =0,digit;
printf("enter the num:");
scanf("%d",&num);
while(num>0)
{
    digit = num %10;
    reverse = reverse*10 + digit;
    num = num/10;

}
printf("reverse = %d",reverse);
return 0;
}