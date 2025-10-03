#include<stdio.h>
int main(){
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    switch(num){
        case 1:
           { 
            printf("You entered One\n");
            break;
        }
        case 2:
        {
            printf("You enterd Two\n");
            break;
        }
        case 3:
        {
            printf("You entered Three\n");
            break;
        }
        default:
        {
            printf("You entered a number other than 1, 2 or 3\n");
        }
        return 0;
    }
}