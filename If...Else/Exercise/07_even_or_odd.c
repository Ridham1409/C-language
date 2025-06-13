#include <stdio.h>
int main()
{
    int num;
    printf("Number = ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d Is A Even Number!", num);
    else
        printf("%d Is A Odd Number", num);

    return 0;

}