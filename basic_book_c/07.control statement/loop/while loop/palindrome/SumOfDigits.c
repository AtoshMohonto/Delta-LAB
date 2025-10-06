#include<stdio.h>
int main(){
    int num,temp,reminder,sum=0;
    printf("Enter any Number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        reminder=temp%10;
        temp=temp/10;
        sum=sum + reminder ;
    }
    printf("Sum of Digits:%d\n",sum);
    
    return 0;
}