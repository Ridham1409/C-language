#include <stdio.h>
int main()
{
    int num;
    printf("Number = ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0)
        printf("Number %d is Divisible by 3 and 7", num);
    else
        printf("Number %d is Not Divisible by 3 And 7", num);

    return 0;
}