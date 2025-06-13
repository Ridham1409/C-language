#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Number 1 = ");
    scanf("%d", &num1);
    printf("Number 2 = ");
    scanf("%d", &num2);

    if (num1 > num2)
        printf("Number %d is bigger", num1);
    else
        printf("Number %d is bigger", num2);

    return 0;
}