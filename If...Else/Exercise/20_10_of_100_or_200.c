#include <stdio.h>
int main()
{
    int v1, v2, ax, bx;
    printf("Enter Number 1 = ");
    scanf("%d", &v1);

    printf("Enter Number 2 = ");
    scanf("%d", &v2);

    if (v1 == v2)
    {
        printf("Both numbers are equal\n");
    }
    if (v1 > 100)
    {
        ax = v1 - 100;
    }
    else
    {
        bx = 100 - v1;
    }
    if (v2 > 100)
    {
        bx = v2 - 100;
    }
    else
    {
        bx = 100 - v2;
    }
    if (ax < bx)
    {
        printf("Number 1 is closer to 100\n");
    }
    else if (bx < ax)
    {
        printf("Number 2 is closer to 100\n");
    }
    else
    {
        printf("Both numbers are equal distance from 100\n");
    }

    return 0;
}
