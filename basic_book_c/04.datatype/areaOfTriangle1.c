#include<stdio.h>
int main(){
    float x,y,z;
    printf("Enter the base and height of triangle:");
    scanf("%f%f",&x,&y);
    z=0.5*x*y;
    printf("Area of triangle is %f",z);
    return 0;
}