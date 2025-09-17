#include<stdio.h>
#include<math.h>
int main(){
    int r, n;
    double p, ci;
    printf("Enter the principal amount, rate of interest and time period: ");
    scanf("%lf %d %d", &p, &r, &n);
    ci = p * pow((1 + r / 100.0), n) - p;
    printf("The compound interest is: %.2lf\n", ci);
    return 0;
}