#include <stdio.h>
int main()
{
    int num;
    printf("Year = ");
    scanf("%d", &num);

    if (num % 4 == 0)
        printf("%d Is A Leap Year!", num);
    else
        printf("%d Is Not A Leap Year!", num);

    return 0;
}