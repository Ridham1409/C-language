#include <stdio.h>
int main()
{
    int val;
    printf("Enter Number = ");
    scanf("%d", &val);

    if (val >= 100 && val <= 999)
        printf("%d Is Three Digit Number\n", val);

    else
        printf("%d Is Not Three Digit Number\n", val);

    return 0;
}