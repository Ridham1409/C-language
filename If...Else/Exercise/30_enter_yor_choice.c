#include <stdio.h>
int main()
{
    int v1, v2, a, b, c, ch;

    printf("Enter Your Choise (2/3) = ");
    scanf("%d", &ch);

    if (ch == 2)
    {

        printf("Enter Number 1 = ");
        scanf("%d", &v1);

        printf("Enter Number 2 = ");
        scanf("%d", &v2);

        printf("Sum of 2 Value is %d", v1 + v2);
    }

    else if (ch == 3)
    {
        printf("Enter Number 1 = ");
        scanf("%d", &a);

        printf("Enter Number 2 = ");
        scanf("%d", &b);

        printf("Enter Number 3 = ");
        scanf("%d", &c);

        printf("Sum of 3 Value is %d", a + b + c);
    }

    else
    {
        printf("Invalid Input, Sorry!");
    }

    return 0;
}
