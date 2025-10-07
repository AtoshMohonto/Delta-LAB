#include<stdio.h>
int main(){
    int x,y,min,i;
    printf("Enter Two Numbers:");
    scanf("%d%d",&x,&y);
    if(x>y){
        min=y;
    }else{
        min=x;
    }
    for(i=min;i>=1;i--){
        if(x%i==0 && y%i==0){
            printf("GCD of two numbewr is:%d",i);
            break;
        }
    }
    return 0;
}