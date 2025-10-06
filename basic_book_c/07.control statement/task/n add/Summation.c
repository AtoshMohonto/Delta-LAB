#include<stdio.h>
int main(){
    int i,num,sum=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+1;
    }
    printf("Summation is%d\n",sum);
    
    return 0;
}