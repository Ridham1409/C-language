#include <stdio.h>
int main()
{
    int a, b, sum;

    printf("Enter A Number = ");
    scanf("%d", &a);

    printf("Enter B Number = ");
    scanf("%d", &b);

    sum = a + b;

    if (10 <= sum && sum <= 20)
    {
        printf("In Range!");
    }
    else
    {
        printf("Not In Range!");
    }

    return 0;
}