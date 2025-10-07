#include <stdio.h>
#include <math.h>
int main()
{
    int x,i, value1, value2, count = 0;

    printf("Please enter a number(only Positive integer):");
    scanf("%d", &x);

    value1 = ceil(sqrt(x));
    value2 = x;

    for (i = 2; i <= value1; i++)
    {
        if (value2 % i == 0)
            count = 1;
    }
    if ((count == 0 && value2 != 1) || value2 == 2 || value2 == 3)
        printf("%d is a prime number", value2);
    else
        printf("%d is not a prime number", value2);
    return 0;
}