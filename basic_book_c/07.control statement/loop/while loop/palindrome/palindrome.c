#include <stdio.h>
int main()
{   
    int num, n, reminder, rev = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    n = num;
    while (num > 0)
    {
        reminder = num % 10;
        rev = rev * 10 + reminder;
        num = num / 10;
    }
    if (n == rev)
        printf("This is a palindrome");
    else
        printf("This is not a palindrome number.\n");
    return 0;
}