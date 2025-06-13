#include <stdio.h>
int main()
{
    int a, b, ax, bx;

    printf("Enter A Number = ");
    scanf("%d", &a);

    printf("Enter B Number = ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("Both are nearest");
    }
    else  
    {
        if (b > 100)
        {
            bx = b - 100;
        }
        else
        {
            bx = 100 - b;
        }

        if (ax < bx)
        {
            printf("A is Near");
        }
        else if (bx < ax)
        {
            printf("B is Near");
        }
        else
        {
            printf("both are nearesst");
        }
    }
    

    // if (a > 100)
    //     ax = a - 100;
    // else
    //     ax = 100 - a;

    // if (b > 100)
    //     bx = b - 100;
    // else
    //     bx = 100 - b;

    // if (ax == bx)
    // {
    //     printf("Both are nearest");
    // }
    // else if (ax < bx)
    // {
    //     printf("A is Near");
    // }
    // else if (bx < ax)
    // {
    //     printf("B is Near");
    // }

    return 0;
}