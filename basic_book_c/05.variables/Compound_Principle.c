#include<stdio.h>
int main(){
    float p,i,a;
    int n;
    float r=.1; // 10% interest rate
    printf("Enter the principal amount and number of years: ");
    scanf("%f %d",&p,&n);
    i=p*r*n;
    a=p+i;
    printf("The interest is: %.2f\n",i);
    printf("The amount after %d years is: %.2f\n",n,a);
    return 0;
}