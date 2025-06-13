#include <stdio.h>
int main()
{
    int num;
    printf("Number = ");
    scanf("%d", &num);

    if (num > 0)
        printf("Number %d is Positive", num);
    else if (num < 0)
        printf("Number %d is Negative", num);
    else
        printf("Number %d is Zero", num);

    return 0;
}