#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("%d modulus is %d \n", num,num);
    }
    else
    {
        printf("%d modulus is %d \n ", num ,-num);
    }
    return 0;
}
