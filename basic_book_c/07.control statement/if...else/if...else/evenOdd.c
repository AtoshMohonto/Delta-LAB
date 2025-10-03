#include<stdio.h>
int main(){
    printf("Enter an integer: ");
    int num;
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is even\n",num);
    }else{
        printf("%d is odd\n",num);
    }
    return 0;
}