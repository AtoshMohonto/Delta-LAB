#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){///row i
        for(j=1;j<=i;j++) ///column j
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}