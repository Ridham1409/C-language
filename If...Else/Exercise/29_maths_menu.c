#include <stdio.h>
int main()
{
    int v1, v2;
    char op;

    printf("Enter Your opretors = ");
    scanf("%c", &op);

    printf("Enter Number 1 = ");
    scanf("%d", &v1);

    printf("Enter Number 2 = ");
    scanf("%d", &v2);

    if (op == '+')
        printf("Sum is %d", v1 + v2);
    else if (op == '-')
        printf("Answer is %d", v1 - v2);
    else if (op == '/')
        printf("Answer is %d", v1 / v2);
    else if (op == '*')
        printf("Answer is %d", v1 * v2);
    else if (op == '%')
        printf("Sum is %d", v1 % v2);

    else
        printf("Invalid Oprater Sorry!");

    return 0;
}
