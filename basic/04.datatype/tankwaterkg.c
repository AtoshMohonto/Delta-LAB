#include<stdio.h>
int main(){
    double p,m,g,h,t;
    p=5000;
    g=9.8;
    h=50;
    printf("Type time in minute:");
    scanf("%lf",&t);
    m=(p*t)/(g*h);
    printf("The weight of water is %lfkg.\n",m);
    return 0;
}