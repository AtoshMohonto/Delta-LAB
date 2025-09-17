#include<stdio.h>
int main(){
    float s,v,t;
    printf("Enter the valures of the distance(metre) and velocity(metre/sec)respeectively:\n");
    scanf("%f%f",&s,&v);
    t=s/v;
    printf("Answer is %0.3f seconds.\n",t);
    return 0;
}