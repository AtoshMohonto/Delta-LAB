#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter the values of n:");
    scanf("%d",&n);
    sum=(n*(n+1)*(2*n+1))/6;
    printf("Sum of the series:%d",sum);
    return 0;
}