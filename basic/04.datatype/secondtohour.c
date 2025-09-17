#include <stdio.h>
int main()
{
    int time, hour, minute, second;
    printf("Enter the time in second:");
    scanf("%d", &time);
    hour = time / 3600;
    minute = (time / 60) % 60;
    second = time % 60;
    printf("%d hour %d minute %d second \n", hour, minute, second);
    return 0;
}