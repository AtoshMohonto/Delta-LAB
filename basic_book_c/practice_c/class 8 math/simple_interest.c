#include<stdio.h>
int main(){
    int p,r,n,si;
    printf("Enter the principal amount, rate of interest and time period: ");
    scanf("%d %d %d",&p,&r,&n);
    si=(p*r*n)/100;
    printf("The simple interest is: %d\n",si);
    return 0;
    main();
}