#include <stdio.h>
int main()
{
    int num;
    printf("Number = ");
    scanf("%d", &num);

    if (num%5==0)
        printf("Number %d is Divisible by 5", num);
    else
        printf("Number %d is Not Divisible by 5", num);
   

    return 0;
}