#include <stdio.h>
int main()
{
    int num;

    printf("Enter A Number = ");
    scanf("%d", &num);

    if (100 >= num || num >= 200)
        printf("It is In Range!");
    else
        printf("Not In Range!");

    return 0;
}