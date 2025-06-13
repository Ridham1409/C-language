#include <stdio.h>
int main()
{
    int num;
    printf("Number = ");
    scanf("%d", &num);

    if (100 <= num >= 200)
        printf("Value is in range");

    else
        printf("Value Out Of Renge");

            return 0;
}