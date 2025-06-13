#include <stdio.h>
int main()
{
    int num;
    printf("Number = ");
    scanf("%d", &num);

    if (num%5==0 && num%11==0)
        printf("Number %d is Divisible by 5 and 11", num);
    else
        printf("Number %d is Not Divisible by 5 And 11", num);
   

    return 0;
}