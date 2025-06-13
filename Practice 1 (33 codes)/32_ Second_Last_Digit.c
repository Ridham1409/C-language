#include <stdio.h>
int main()
{
    int a;
    printf("Enter a value = ");
    scanf("%d", &a);
    int b = a / 10;
    int c = b % 10;
    printf("Second last digit of %d is %d\n", a, c);
    return 0;
}