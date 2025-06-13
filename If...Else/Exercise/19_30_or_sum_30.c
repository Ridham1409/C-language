#include <stdio.h>
int main()
{
    int v1, v2;
    printf("Enter Number 1 = ");
    scanf("%d", &v1);

    printf("Enter Number = ");
    scanf("%d", &v2);

    if (v1 == 30 || v2 == 30 || (v1 + v2) == 30)
        printf("True");

    else
        printf("False");

    return 0;
}