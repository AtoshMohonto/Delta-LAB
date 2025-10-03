#include<stdio.h>
int main(){
    float length,raidus,effectiveLength;
    printf("Enter the length of the pendulum in meters: ");
    scanf("%f",&length);
    printf("Enter the raidus of the bob in meters: ");
    scanf("%f",&raidus);
    effectiveLength=length+raidus;
    printf("The effective length of the pendulum is: %.2f meters\n",effectiveLength);
    return 0;
}