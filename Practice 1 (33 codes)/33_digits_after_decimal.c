#include <stdio.h>
int main()
{
    float fval;
    printf("Enter a float value = ");
    scanf("%f", &fval);
    int integer_part = (int)fval;
    float fractional_part = fval - integer_part;
    printf("Fractional part of %.2f is %.2f\n", fval, fractional_part);
    return 0;
}