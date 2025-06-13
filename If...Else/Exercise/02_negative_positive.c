#include <stdio.h>
int main()
{
    int num;
    printf("Number 1 = ");
    scanf("%d", &num);

    if (num > 0)
        printf("Number %d is Positive", num);
    else
        printf("Number %d is Negative", num);

    return 0;
}