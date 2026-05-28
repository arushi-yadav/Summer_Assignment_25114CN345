#include<stdio.h>
int main(){
    int n,count=0,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    printf("number of divisors of %d is %d",n,count);
    return 0;
}