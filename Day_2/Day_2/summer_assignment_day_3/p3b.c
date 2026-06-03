#include<stdio.h>
int main(){
    int start, end, num,i,prime;
    printf("enter start and end:");
    scanf("%d%d",&start,&end);
    for(num=start;num<=end; num++){
        prime=1;
        if(num<=1)
        prime =0;
        for(i=2;i<=num;i++){
            if(num%i==0){
                prime = 0;
                break;

            }
        }
        if(prime)
        printf("%d",num);

    
    }
    return 0;
}