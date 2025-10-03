#include<stdio.h>
int main(){
    float radius, area;
    const float pi = 3.14159; // Constant value for pi
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius; // Area calculation
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}